#include <iostream>
#include <Windows.h>
#define add(a,b) a+b
#define DD "%d"
int main(){
	printf(DD, add(1, 4));
	while (1) {
		//printf("%d", MessageBoxA(NULL, "11", "11", MB_YESNO));
		//YES是6NO为7

		//printf("%d", MessageBoxA(NULL, "11", "11", MB_APPLMODAL));
		//printf("%d\n", MessageBoxA(NULL, "11", "11", MB_DEFAULT_DESKTOP_ONLY));
		//提示框，单确定，返回1

		//printf("%d", MessageBoxA(NULL, "11", "11", MB_ABORTRETRYIGNORE));
		//printf("%d\n", MessageBoxA(NULL, "11", "11",MB_COMPOSITE));
		//终止3重试4忽略5

		//printf("%d", MessageBoxA(NULL, "11", "11",MB_CANCELTRYCONTINUE));
		//取消2重试10继续11

		//printf("%d\n", MessageBoxA(NULL, "11", "11",MB_CUR_MAX));
		//确定1，取消2
	}
	return 0;
}