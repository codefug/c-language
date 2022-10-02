#include <stdio.h>

int main(void)
{
	int sum;
	int price;
	int days;

	printf("여행은 몇박인가요?");
	scanf("%d", &days);
	
	printf("항공권 가격은 얼마인가요?");
	scanf("%d", &sum);

	printf("호텔 1박 가격:");
	scanf("%d", &price);
	sum = sum + days * price;

	printf("하루에 필요한 용돈:");
	scanf("%d", &price);
	sum = sum + days * price;

	printf("==================================\n");
	printf("총 여행 비용:%d\n", sum);
	printf("==================================\n");

	return 0;
}