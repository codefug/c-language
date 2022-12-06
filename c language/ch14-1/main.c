#include <stdio.h>
#include "myMath.h"
#include "myMath.h"//test for  #pragma once

int main(void)
{
	printf("%d\n", add(1, 2));
	printf("%d\n", sub(2, 1));
	printf("%d\n", mul(2, 2));
	printf("%lf\n", _div(5, 2));

	printf("functionCount = %d\n", functionCount);

	return 0;
}
