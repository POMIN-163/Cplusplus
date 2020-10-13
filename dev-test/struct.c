#include <stdio.h>

typedef struct{
	int var1;
	char var2;
	unsigned int var3;
	unsigned char var4;
}Struct;

int Fun(Struct * var){
	printf("ADDRESS:%d\n", var);		
}

int main(){
	Struct a;
	Struct * b;
	a.var1 = 8;
	a.var2 = 16;
	a.var3 = 24;
	a.var4 = 30;
	
	//b->var1 = 8;
		printf("ADDRESS:%d\n", &a);	
		printf("ADDRESS:%d\n", b);	
	Fun(&a);
	Fun(b);
	printf("END");	
}
