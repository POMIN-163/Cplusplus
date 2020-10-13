#include<stdio.h>
void fun1(int a, int b);
void fun2(void);

int main(){
	fun1(88,99);
	fun2();
	return 0;
}

void fun1(int a, int b){
	register void * sp1 asm("rcx");
	register void * sp2 asm("rdx");
	printf("%d,%d\n", sp1, sp2);
}
void fun2(void){
	register void * sp1 asm("rcx");
	register void * sp2 asm("rdx");
	printf("%d,%d\n", sp1, sp2);
}

