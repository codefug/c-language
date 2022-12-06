#include "myMath.h"

int functionCount;

int add(int num1, int num2)
{
	test();
	functionCount++;
	return num1 + num2;
}

int sub(int num1, int num2)
{
	functionCount++;
	return num1 - num2;
}
int mul(int num1, int num2)
{
	functionCount++;
	return num1 * num2;
}

double _div(int num1, int num2)
{
	functionCount++;
	return num1 / (double)num2;
}

void test()
{
	printf("test\n");
}
