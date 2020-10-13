#include <stdio.h>

int fun(int);// 函数 
int (*point)(int);// 函数指针 
int (*fun_arr[10])(int);// 函数指针数组
int *p[10];// 指针数组
int _arr[2][10] ={1, 2, 3, 4, 5};
int (*arr_p)[10] = _arr; // 数组指针 

typedef (*Fun_Point)(int);
Fun_Point FP (int);

int fun(int x){
	return 0;
}
int fun_0(int x){
	return x + 0;
}
int fun_1(int x){
	return x + 1;
} 
int fun_2(int x){
	return x + 2;
}
Fun_Point FP (int x){
	return fun_2;
}

int main(){
	int a = 10, b = 11, c = 12; 
	point = fun_0;
	fun_arr[0] = fun_0;
	fun_arr[1] = fun_1;
	fun_arr[2] = fun_2;
	printf(":%d, %d\n",*(arr_p)+1, &arr_p[0][1]);
	printf(":%d,%d\n",point,point (50));
	printf(":%d,%d,%d\n", fun_arr[0](50), fun_arr[1](50), fun_arr[2](50));
	
	printf("POINT:%d\n",FP(1)(9));
	return 0;
}
