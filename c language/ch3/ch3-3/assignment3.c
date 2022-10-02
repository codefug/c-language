#include <stdio.h>

int main(void) {
	float tem;
	float answer;

	printf("È­¾¾¿Âµµ=");
	
	scanf("%f", &tem);

	answer = (tem- 32) * 5 / 9;

	printf("¼·¾¾¿Âµµ=%f",answer);
	
	return 0;
}