#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>

#include <d3d11.h>
#include <D3Dcompiler.h>
#include <iostream>
#include "detours.h"
#include "FW1FontWrapper.h" //dx11画字用的比IMGUI性能高吧

#include <thread>

#include "imgui.h"
#include "imgui_internal.h"
#include "imgui_impl_dx11.h"

#include "DrawUtil.h"
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "detours.lib")
#pragma comment  (lib,"User32.lib")//在静态编译下面用的
#pragma comment  (lib,"Gdi32.lib")

//------------------------
//qq1095204365
//------------------------
//-----------------弱鸡Hook------------------------
typedef HRESULT(__stdcall *D3D11PresentHook) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
//-----------------------------------------
HWND hWindow;//游戏的窗口句柄
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

//------------------保存一下原来的弱鸡 正如我刚刚所说需要跳转回去---------------------------
D3D11PresentHook phookD3D11Present = NULL;
//---------------------END------------------------------------------
void MenuKeyMonitor();

//-------控制台用的--------------
HINSTANCE g_hInstance = 0;
HANDLE g_hOutput = 0;
HWND hwnd = NULL;
HMENU hmenu = NULL;
CHAR title[] = "不要关闭本窗口！说的你好像真的能关掉一样！";
TCHAR c[];
HANDLE hdlWrite = NULL;
//---------------------
 
//------------拿到这四个弱鸡指针------------------------------
ID3D11Device*  pDevice;
ID3D11DeviceContext * pContext;
IDXGISwapChain * pSwapChain;
ID3D11RenderTargetView* pRenderTargetView;
//------------------END------------------------------

//-----------绘制字体-------------------------
IFW1Factory *pFW1Factory = NULL;
IFW1FontWrapper *pFontWrapper = NULL;
//----------end----------------------------

WNDPROC oWndProc = nullptr;//窗口句柄
bool g_ShowMenu =false;
LRESULT WINAPI  hkWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)

{
  //WriteConsole(hdlWrite, "ojbk\n", sizeof("ojbk\n"), NULL, NULL);
	//https://www.reddit.com/r/REGames/comments/960eln/current_progress_question_on_wndprocimgui/ imgui消息钩子
	//ImGuiIO& io = ImGui::GetIO();

	//POINT mPos;
	//GetCursorPos(&mPos);
	//ScreenToClient(hWindow, &mPos);
	//ImGui::GetIO().MousePos.x = mPos.x;
	//ImGui::GetIO().MousePos.y = mPos.y;

	//if (uMsg == WM_KEYUP)
	//{
	//	if (wParam == VK_DELETE)
	//	{
	//		g_ShowMenu = !g_ShowMenu;
	//	 
	//	}
	//这里发生了一个很傻逼的问题 导致我卡了 四五天 

	//}

	//if (g_ShowMenu)
	//{
	//	ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
	//	return true;
	//}

	if(ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}
//---------------------------------------------------------
BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam)
{
	DWORD dwCurProcessId = *((DWORD*)lParam);
	DWORD dwProcessId = 0;

	GetWindowThreadProcessId(hwnd, &dwProcessId);
	if (dwProcessId == dwCurProcessId && GetParent(hwnd) == NULL)
	{
		*((HWND *)lParam) = hwnd;
		return FALSE;
	}
	return TRUE;
}
HWND GetMainWindow()
{
	DWORD dwCurrentProcessId = GetCurrentProcessId();
	if (!EnumWindows(EnumWindowsProc, (LPARAM)&dwCurrentProcessId))
	{
		return (HWND)dwCurrentProcessId;
	}
	return NULL;
}
//------------------------------------------------------------

//初始化IMGUI
void Initialization() {
	WriteConsole(hdlWrite, "Initialization\n", sizeof("Initialization\n"), NULL, NULL);
 	ImGui::CreateContext();
 }

bool Initializationimgui = true;
HRESULT __stdcall hookD3D11Present(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	//WriteConsole(hdlWrite, "OK\n", sizeof("OK\n"), NULL, NULL);
	if (Initializationimgui) {
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void **)(&pDevice))))
		{pDevice->GetImmediateContext(&pContext);
		}ID3D11Texture2D* renderTargetTexture = nullptr;
		//获取后缓冲区地址
		if (SUCCEEDED(pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D),reinterpret_cast<PVOID*>(&renderTargetTexture))))
		{pDevice->CreateRenderTargetView(renderTargetTexture, NULL, &pRenderTargetView);
			renderTargetTexture->Release();}
		ImGuiIO& io = ImGui::GetIO();
		io.Fonts->AddFontDefault();
		ImGui_ImplDX11_Init(hWindow, pDevice, pContext);
		ImGui_ImplDX11_CreateDeviceObjects();
		ImGui::StyleColorsDark();


		FW1CreateFactory(FW1_VERSION, &pFW1Factory);
		pFW1Factory->CreateFontWrapper(pDevice, L"Tahoma", &pFontWrapper);
		pFW1Factory->Release();
 		Initializationimgui = false;

      		//CreateThread(NULL, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(MenuKeyMonitor), NULL, NULL, NULL);

	}pContext->OMSetRenderTargets(1, &pRenderTargetView, NULL);


 

	ImGui_ImplDX11_NewFrame();
	DrawUtil::DrawBox(15, 200, 100, 100, 255, 0, 0, 255, 1);
	//这个写字 不卡fps

	//这个写字 不卡fps
	pFontWrapper->DrawString(pContext, DrawUtil::char2wchar("Deep♂Dark♂Fantasy"), 10.0f, 16.0f, 16.0f, 0xffff1612, FW1_RESTORESTATE);
  	ImGui::Begin(u8"菜单");
	ImGui::Text(u8"当前FPS:%.1f", ImGui::GetIO().Framerate);
	if (ImGui::Button(u8"测试")) {
		WriteConsole(hdlWrite, "按钮测试\n", sizeof("按钮测试\n"), NULL, NULL);

	}
	ImGui::End();




	//MessageBox(hWindow, "这个代码很危险懂我意思吧!", "错误?", MB_ICONERROR); //不要在这里面写MessageBox
	WriteConsole(hdlWrite, "ojbk\n", sizeof("ojbk\n"), NULL, NULL);
	
	ImGui::Render();
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	//跳转过去
	return phookD3D11Present(pSwapChain, SyncInterval, Flags);
}

bool Menu = true;

void MenuKeyMonitor() {
	while (true)
	{
		if (Menu)
		{
			POINT mousePosition;
			GetCursorPos(&mousePosition);
			ScreenToClient(hWindow, &mousePosition);

			ImGuiIO& io = ImGui::GetIO();
			io.MousePos.x = mousePosition.x;
			io.MousePos.y = mousePosition.y;

			if (GetAsyncKeyState(VK_LBUTTON))
				io.MouseDown[0] = true;
			else
				io.MouseDown[0] = false;
		}
		else
		{
			std::this_thread::sleep_for(
				std::chrono::milliseconds(250));
		}

		if (GetAsyncKeyState(VK_INSERT))
		{
               Menu = !Menu;

			std::this_thread::sleep_for(
				std::chrono::milliseconds(250));
		}
	}

}

 

//开始hook 
DWORD WINAPI initHookThread(LPVOID dllMainThread) {
//大致流程 先创建一个D3D11的窗口 然后 拿到设备指针 然后 再从设备指针 拿到 虚函数  然后 挂钩 然后跳转 到我们的方法 然后在跳转回去OJBK
	





	//----------------------创建垃圾D3D11窗口------------------------------


	//交换链
	DXGI_SWAP_CHAIN_DESC scd;
	ZeroMemory(&scd, sizeof(DXGI_SWAP_CHAIN_DESC));   //填充0
	scd.BufferCount = 1;
	scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	scd.OutputWindow = hWindow;
	scd.SampleDesc.Count = 1;
	scd.Windowed = TRUE;//有时候这个也有可能导致hook崩溃等等-.-
	scd.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
	scd.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
	scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;


	D3D_FEATURE_LEVEL featrueLevel = D3D_FEATURE_LEVEL_11_0;

if(FAILED(	D3D11CreateDeviceAndSwapChain(
		NULL,
		D3D_DRIVER_TYPE_HARDWARE,
		NULL,
		NULL, &featrueLevel,
		1,
		D3D11_SDK_VERSION,
		&scd,
		&pSwapChain,
		&pDevice,
		NULL,
		&pContext
	)))
	{
		MessageBox(hWindow, "HOOK失败当然你可以试试管理员运行!", "错误", MB_ICONERROR);

		return NULL;
	}
	DWORD_PTR* pSwapChainVT = NULL;
	DWORD_PTR* pDeviceVT = NULL;
	DWORD_PTR* pContextVT = NULL;
	//-------------------------------------------------------------------------------------------
	pSwapChainVT = reinterpret_cast<DWORD_PTR*>(pSwapChain);//拿指针
	pSwapChainVT = reinterpret_cast<DWORD_PTR*>(pSwapChainVT[0]);//拿对象
	phookD3D11Present = reinterpret_cast<D3D11PresentHook>(pSwapChainVT[8]);//拿到这个方法东西 就是Present
	Initialization();//初始化IMGUI
	//-------------自行百度detours Hook------------------------
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	//原来的phookD3D11Present 
 	DetourAttach(reinterpret_cast<PVOID *>(&phookD3D11Present), hookD3D11Present);
 	DetourTransactionCommit();
	//-------------------------------------
	//开始监视 键盘动作


	pDevice->Release();
	pContext->Release();
	pSwapChain->Release();
	return 0;

}





HANDLE curThread;

//dll 入口
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		//------------------控制台-----------------------
		AllocConsole();
		g_hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
 		//设置控制台窗口的属性
		SetConsoleTitle(title);
		SetConsoleTextAttribute((HANDLE)g_hOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		while (NULL == hwnd) hwnd = ::FindWindow(NULL, (LPCTSTR)title);
		//屏蔽掉控制台窗口的关闭按钮，以防窗口被误删除
		hmenu = ::GetSystemMenu(hwnd, FALSE);
		DeleteMenu(hmenu, SC_CLOSE, MF_BYCOMMAND);
		hdlWrite = GetStdHandle(STD_OUTPUT_HANDLE); //这里也可以使用STD_ERROR_HANDLE    TCHAR c[] = {"Hello world!"};WriteConsole(hdlWrite, c, sizeof(c), NULL, NULL);

	 //------------------------------------
	 //hWindow = FindWindow(NULL, L"XXXXXXXXXXXXX"); 其实这个方法好用 懂我 意思吧 注入闪退没效果大部分就是这个问题
	 //这个方法不稳 有些游戏获取不到
	 hWindow = GetMainWindow();//动态获取主线程 的前台窗口句柄
	 
	     	 hWindow = FindWindow(NULL, "植物大战僵尸中文版");
 			oWndProc = (WNDPROC)SetWindowLongPtr(hWindow, GWL_WNDPROC, (DWORD_PTR)hkWndProc);
          if (oWndProc == nullptr) return 1;

		if (!DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(), &curThread, SYNCHRONIZE, FALSE, 0))
			return FALSE;
        //启动一个线程来hook
		CloseHandle(CreateThread(NULL, 0, initHookThread, curThread, 0, NULL));


	case DLL_PROCESS_DETACH:
	 //需要卸载吗？
		DetourTransactionBegin();
		DetourUpdateThread(curThread);
 		DetourDetach(reinterpret_cast<PVOID *>(&phookD3D11Present), hookD3D11Present);
 		DetourTransactionCommit();
		
		break;
  	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	}
	return TRUE;

}