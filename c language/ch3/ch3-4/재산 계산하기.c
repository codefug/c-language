#include <stdio.h>

int main(void) {
	long long x;

	printf("매달 저축 금액을 입력하시오: ");
	scanf("%lld", &x);

	printf("30년 후의 재산 = %lld", x * 12 * 30);

	return 0;
}