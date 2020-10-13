#include <stdio.h>
const int test_all = 10;// 全局 const 
int main(){
	const int test_local = 100;// 局部 const 
	int * test_adr1;
	int * test_adr2;
	
	printf("前:全局: %d,%d,局部: %d,%d\n",&test_all, test_all, &test_local, test_local);

	test_adr2 = (int *)&test_local;
	*test_adr2 = 105;

	printf("后:局部: %d,%d\n", test_adr2, test_local);	
	
	test_adr1 = (int *)test_all;
	*test_adr1 = 15;
	
	printf("后:全局: %d,%d\n", test_adr1, test_all);	
}
