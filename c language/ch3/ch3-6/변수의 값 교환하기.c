#include <stdio.h>

int main(void) {
	int a = 100;
	int b = 200;
	int tmp;

	tmp = a;
	a = b;
	b = tmp;

	printf("%d %d", a, b);

	return 0;
}