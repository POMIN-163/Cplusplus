// dear imgui - standalone example application for DirectX 11
// If you are new to dear imgui, see examples/README.txt and documentation at the top of imgui.cpp.

#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include <d3d11.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>


// Data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static IDXGISwapChain*          g_pSwapChain = NULL;
static ID3D11RenderTargetView*  g_mainRenderTargetView = NULL;

// Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();

void ShowWindow(bool* p_open);

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Main code
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T("ImGui Example"), NULL };
    // ����һ��Windows������
    ::RegisterClassEx(&wc);
    // ע�ᴰ����
    
    HWND hwnd = ::CreateWindow(wc.lpszClassName, _T("Dear ImGui DirectX11 Example"), WS_EX_TOPMOST|WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    // ��������
    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        ::UnregisterClass(wc.lpszClassName, wc.hInstance);
        return 1;
    }
    // ��ʼ�� Direct3D
    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    // ���ڿ��ӻ�
    ::UpdateWindow(hwnd);
    // ˢ�´���
    IMGUI_CHECKVERSION();
    // IMGUI�汾���
    ImGui::CreateContext();
    // ����������
    ImGuiIO& io = ImGui::GetIO();
    (void)io;
    // D3D���Ƴɹ�У��  
    ImGui::StyleColorsDark();//ImGui::StyleColorsClassic();
    // ����ѡ��
    // Setup Platform/Renderer bindings
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);
    // ��ʼ������

    // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'docs/FONTS.md' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF("../../misc/fonts/Roboto-Medium.ttf", 16.0f);
    io.Fonts->AddFontDefault();
 
    //io.Fonts->AddFontFromFileTTF("../../misc/fonts/DroidSans.ttf", 16.0f);
    //io.Fonts->AddFontFromFileTTF("../../misc/fonts/ProggyTiny.ttf", 10.0f);

    //IM_ASSERT(font != NULL);

    // Our state
    bool show_demo_window = true;
    bool show_another_window = false;
    bool pomin_window = true;

    // ����ʱ�����Ƿ���ʾ
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    // ���ɫ�ʱ༭��ṹ��ʵ��

    MSG msg;
    // Windows ��Ϣѭ����������Ϣ
    ZeroMemory(&msg, sizeof(msg));
    // �ͷŽṹ���ڴ�ռ�
    while (msg.message != WM_QUIT)
    // ����Ϣѭ��
    {
        // Poll and handle messages (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        // ץȡ��Ϣ��msg����
        // PeekMessage:������Ϣ�������Ƿ���ӵ�
        // Getmessage:�����Ϣ��������Ϣֵ
        {
            ::TranslateMessage(&msg);
            // �������Ϣת��Ϊ�ַ���Ϣ������WM_CHAR��Ϣ
            ::DispatchMessage(&msg);
            // ����Ϣ���õ���Ϣ����
            continue;
        }
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
         // ��������
        // 1. Show the big demo window (Most of the sample code is in
        // ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        /*if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);*/
       // ����������
        // 2. Show a simple window that we create ourselves.
        // We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;

            ImGui::Begin("Hello, world!");                          // Create a window called "Hello, world!" and append into it.

            ImGui::Text("This is some useful text.");               // Display some text (you can use a format strings too)
            ImGui::Checkbox("Demo Window", &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox("Another Window", &show_another_window);

            ImGui::SliderFloat("float", &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3("clear color", (float*)&clear_color); // Edit 3 floats representing a color

            if (ImGui::Button("Button"))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text("counter = %d", counter);
            ImGui::Button("POMIN");

            ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
        /*
        // 3. Show another simple window.
        // ��һ����������
        if (show_another_window)
        {
            ImGui::Begin("Another Window", &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text("Hello from another window!");
            if (ImGui::Button("Close Me"))
                show_another_window = false;
            ImGui::End();
        }
        */
        if (pomin_window) {
            ShowWindow(&pomin_window);
        }

        // Rendering
        ImGui::Render();
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

        g_pSwapChain->Present(1, 0); // Present with vsync
        //g_pSwapChain->Present(0, 0); // Present without vsync
        
    }

    // Cleanup
    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    CleanupDeviceD3D();
    ::DestroyWindow(hwnd);
    ::UnregisterClass(wc.lpszClassName, wc.hInstance);
    
    return 0;
}

// �½�D3D�豸
bool CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext) != S_OK)
        return false;

    CreateRenderTarget();
    return true;
}
// ��ϴD3D
void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}
// ������ȾĿ��
void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();
}
// ��ϴ��ȾĿ��
void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}

// Forward declare message handler from imgui_impl_win32.cpp
// ����imgui_impl_win32.cpp����Ϣ������
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// ���ڻص�����
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:// ���ڴ�С�ı�
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            CreateRenderTarget();
        }
        return 0;
    case WM_SYSCOMMAND:// ϵͳ�˵���Ϣ
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:// ���ٴ���
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

HANDLE PVZ_GetHANDLE() {
    HWND h = ::FindWindow(NULL, "ֲ���ս��ʬ���İ�");
    // Ѱ�Ұд���
    DWORD processid;
    GetWindowThreadProcessId(h, &processid);
    // ͨ�����ھ����ý���ID
    HANDLE processh = 0;
    processh = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processid);
    // ���ӡ����PVZ���̾��
    if (processh == 0)
        return NULL;
    else
        return processh;
}
void PVZ_Crack(HANDLE processh, DWORD Sun_Value, DWORD Money_Value) {
    int sun = 0; // ���ڴ����������
    LPCVOID mbase = (LPCVOID)0x006A9EC0;
    // [[[006A9EC0]+768]+5560] = sun
    LPVOID mbuffer = (LPVOID)&sun;
    // ��mbuffer(void *)ָ��sun(int *)�ĵ�ַ�Խ���ȡֵ����sun����
    ::ReadProcessMemory(processh, mbase, mbuffer, 4, 0);
    mbase = (LPCVOID)(sun + 0x768);// sun��int *����
    ::ReadProcessMemory(processh, mbase, mbuffer, 4, 0);
    mbase = (LPCVOID)(sun + 0x5560);// sun��int *����
    ::ReadProcessMemory(processh, mbase, mbuffer, 4, 0);
    // sun��int����
    int money; // ���ڴ��Ǯ����
    LPCVOID mbase2 = (LPCVOID)0x006A9F38;
    // [[[006A9F38]+82C]+28] = money
    LPVOID mbuffer2 = (LPVOID)&money;
    ::ReadProcessMemory(processh, mbase2, mbuffer2, 4, 0);
    mbase2 = (LPCVOID)(money + 0x82C);
    ::ReadProcessMemory(processh, mbase2, mbuffer2, 4, 0);
    mbase2 = (LPCVOID)(money + 0x28);
    ::ReadProcessMemory(processh, mbase2, mbuffer2, 4, 0);

    // д���ڴ��޸���Ϸ����
    if (Sun_Value != 0)
        WriteProcessMemory(processh, (LPVOID)mbase, &Sun_Value, 4, 0);
    if (Money_Value != 0)
        WriteProcessMemory(processh, (LPVOID)mbase2, &Money_Value, 4, 0);
}
bool PVZ_NotCool(HANDLE processh) {
    DWORD FLoNum = 0x1477;
    if (WriteProcessMemory(processh, (LPVOID)0x00487296, &FLoNum, 2, NULL))
        return true;
    else
        return false;
}


void ShowWindow(bool* p_open) {
    static bool myCheckbox = false;
    ImGui::Begin("POMIN", p_open);
    ImGui::Text("pomin's first window");
    if (ImGui::Button("my button")) {
        MessageBoxA(NULL, "OK", "TIP", 0);
    }
    /////////////////////////////PVZ Crack
 
    static int sun = 0, money = 0;
    ImGui::InputInt("sun", &sun);
    ImGui::InputInt("money", &money);
    HANDLE a = PVZ_GetHANDLE();
    if (ImGui::Button("crack sun and money")) {
        if (a != NULL) {
            PVZ_Crack(a, sun, money / 10);
            MessageBoxA(NULL, "Successed", "TIP", 0);
        }
        else
        {
            MessageBoxA(NULL, "Failed", "TIP", 0);
        }
    }
    ImGui::SameLine();
    if (ImGui::Button("plant without cool")){
        if (PVZ_NotCool(a)) {
            MessageBoxA(NULL, "Successed", "TIP", 0);
        }
        else
        {
            MessageBoxA(NULL, "Failed", "TIP", 0);
        }
    }
    /////////////////////////////PVZ Crack
    // ImGui::InputText("", str0, IM_ARRAYSIZE(str0));
    //ImGui::Checkbox("myCheckbox", &myCheckbox);

    ImGui::End();
}
