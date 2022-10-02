#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	//int sum;
	//int sub;
	//int multi;

	printf("두 개의 숫자를 입력하시오");
	scanf("%d %d %d", & x,&y,&z);

	//sum = x + y +z;
	//sub = x - y -z;
	//multi = x * y *z;

	printf("세 수의 합:%d\n세 수의 차:%d\n세 수의 곱:%d\n세 수의 나눗셈:%d\n",x+y+z,x-y-z,x*y*z,x/y/z);
	printf("퍼센트를 쓰는 법 %%:%d", x % y);
	return 0;
}