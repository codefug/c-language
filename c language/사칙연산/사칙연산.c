#include <stdio.h>

int main(void)
{
	float x;
	float y;

	scanf("%f %f", &x, &y);

	printf("ÇÕ : %f\n", x + y);
	printf("Â÷ : %f\n", x - y);
	printf("°ö : %f\n", x * y);
	printf("³ª´°¼À:%f\n", x / y);
	//printf("³ª¸ÓÁö:%f\n", x % y);

	return 0;
}