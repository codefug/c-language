#include <stdio.h>

int main(void)
{
	float x;
	float y;

	scanf("%f %f", &x, &y);

	printf("�� : %f\n", x + y);
	printf("�� : %f\n", x - y);
	printf("�� : %f\n", x * y);
	printf("������:%f\n", x / y);
	//printf("������:%f\n", x % y);

	return 0;
}