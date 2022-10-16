#include <stdio.h>

int main(void) {
	int i = 1;

	printf("%d장\n", i);
	i += 1;
	printf("Hello World!\n");
	//hello world를 출력하라.


	printf("%d장\n", i);
	i += 1;
	int e = 1;

	//구구단의 일부를 출력해보자
	printf("3 X %d = %d\n", e, e * 3);
	e += 1;
	printf("3 X %d = %d\n", e, e * 3);
	e += 1;
	printf("3 X %d = %d\n", e, e * 3);
	e += 1;

	//사용자로부터 두 수를 받아서 더한 후에, 결과를 출력해보자.
	int q;
	int w;
	printf("첫 번째 숫자를 입력하시오: ");
	scanf("%d", &q);
	printf("두 번째 숫자를 입력하시오: ");
	scanf("%d", &w);
	printf("두 수의 합 =%d", q + w);

	//여행 비용을 계산해주는 프로그램을 작성해보자.
	int day;
	int price;
	int allowance;
	int hotel;

	printf("여행은 몇박인가요?: ");
	scanf("%d", &day);
	printf("항공권 가격: ");
	scanf("%d", &price);
	printf("호텔 1박 가격: ");
	scanf("%d", &hotel);
	printf("하루에 필요한 용돈: ");
	scanf("%d", &allowance);
	printf("====================\n");
	printf("총 여행 비용:%d\n",day*(allowance+hotel)+price);
	printf("====================\n");

	printf("%d장\n", i);
	i += 1;

	printf("%d장\n", i);
	i += 1;

	printf("%d장\n", i);
	i += 1;

	printf("%d장\n", i);
	i += 1;

	printf("%d장\n", i);
	i += 1;

	printf("%d장\n", i);
	i += 1;

}