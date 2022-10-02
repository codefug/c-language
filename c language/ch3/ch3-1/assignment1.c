#include <stdio.h>
#define EXCHANGE_RATE 1120

int main(void) {

	int used;
	int	krw;

	printf("달러화 금액을 입력하시오: ");

	scanf("%d", &used);
	
	krw = used * EXCHANGE_RATE;
	
	printf("달러화 %d달러는 %d 원입니다.",used,krw);

	return 0;
}