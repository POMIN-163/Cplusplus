#include <stdio.h>
const int test_all = 10;// ȫ�� const 
int main(){
	const int test_local = 100;// �ֲ� const 
	int * test_adr1;
	int * test_adr2;
	
	printf("ǰ:ȫ��: %d,%d,�ֲ�: %d,%d\n",&test_all, test_all, &test_local, test_local);

	test_adr2 = (int *)&test_local;
	*test_adr2 = 105;

	printf("��:�ֲ�: %d,%d\n", test_adr2, test_local);	
	
	test_adr1 = (int *)test_all;
	*test_adr1 = 15;
	
	printf("��:ȫ��: %d,%d\n", test_adr1, test_all);	
}
