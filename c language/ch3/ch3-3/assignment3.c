#include <stdio.h>

int main(void) {
	float tem;
	float answer;

	printf("ȭ���µ�=");
	
	scanf("%f", &tem);

	answer = (tem- 32) * 5 / 9;

	printf("�����µ�=%f",answer);
	
	return 0;
}