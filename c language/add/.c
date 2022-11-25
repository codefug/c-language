//두개의 숫자의 합을 계산하는 프로그램
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;
	int sub;
	int muti;

	x = 100;
	y = 200;
	
	sum = x + y;
	sub = x - y;
	muti = x * y;

	printf("두 수의 합은 %d\n", sum);
	printf("두 수의 차는 %d\n", sub);
	printf("두 수의 곱은 %d\n", muti);
	return 0;
}