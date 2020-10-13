#include "DrawUtil.h"

#include <Windows.h>

 
#include "imgui.h"
#include "imgui_internal.h"
#include "imgui_impl_dx11.h"

  wchar_t * DrawUtil::char2wchar(const char * cchar)
 {
	 wchar_t *m_wchar;
	 int len = MultiByteToWideChar(CP_ACP, 0, cchar, strlen(cchar), NULL, 0);
	 m_wchar = new wchar_t[len + 1];
	 MultiByteToWideChar(CP_ACP, 0, cchar, strlen(cchar), m_wchar, len);
	 m_wchar[len] = '\0';
	 return m_wchar;
 }

  void DrawUtil::DrawBox(int X, int Y, int W, int H, int R, int G, int B, int A, int T)
 {
	 ImGui::GetOverlayDrawList()->AddRect(ImVec2(X, Y), ImVec2(X + W, Y + H), ImGui::ColorConvertFloat4ToU32(ImVec4(R / 255.0, G / 255.0, B / 255.0, A / 255.0)), 0, 0, T);

 
 }
