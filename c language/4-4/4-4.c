#include <stdio.h>

int main(void) 
{
	int money;
	int item;
	int result;

	printf("투입한 돈 :");
	scanf("%d", &money);

	printf("물건값:");
	scanf("%d", &item);

	result = money - item;
	printf("거스름돈:%d\n",result);

	printf("100원 동전의 개수:%d\n", result / 100);

	printf("10원 동전의 개수:%d\n", (result % 100) / 10);

	return 0;
}