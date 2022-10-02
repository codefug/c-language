#include <stdio.h>

int main(void)
{
	int money;
	int candy;
	int result;

	printf("현재 가지고 있는 돈 : ");
	scanf("%d", &money);

	printf("캔디의 가격 : ");
	scanf("%d", &candy);

	result = money / candy;
	printf("최대로 살 수 있는 캔디의 개수 : %d\n",result);

	result = money % candy;
	printf("캔디구입 후 남은 돈: %d\n", result);
		
	return 0;
}