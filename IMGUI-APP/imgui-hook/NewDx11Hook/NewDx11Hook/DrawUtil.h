#pragma once
class DrawUtil
{
public:
	static wchar_t * char2wchar(const char* cchar);//类型转换
	static void DrawBox(int X, int Y, int W, int H, int R, int G, int B, int A, int T);//绘制方框
};

