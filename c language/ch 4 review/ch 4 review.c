#include <stdio.h>
#include <math.h>

int main(void) {

	//궁금해서 해봄
	/*char x='b';

	printf("%f", (float)x);*/
	
	/*int money;
	int item;
	int change;

	printf("투입한 돈: ");
	scanf("%d", &money);
	printf("물건값: ");
	scanf("%d", &item);
	change = money - item;
	printf("거스름돈: %d\n\n", change);

	printf("100원 동전의 개수: %d\n", change / 100);
	printf("10원 동전의 개수: %d", change % 100 / 10);
	*/

	/*double x;
	double y;

	x = 2;
	y = 3.0 * x * x + 7.0 * x + 9.0;

	printf("y=3.0*x*x+7.0*x+9.0=%lf", y);*/

	/*double x;
	double y;
	int z;

	printf("초기저금액: ");
	scanf("%lf", &x);
	printf("이율: ");
	scanf("%lf", &y);
	printf("저축기간: ");
	scanf("%d", &z);
	printf("%d년 후의 원리금= %lf", z, (x * pow(1 + y, z)));
	*/

	/*int x;
	
	scanf("%d", &x);
	printf("x를 전위증감시키면 %d\n", ++x);
	printf("그 후에 후위 증감시키면 %d\n", x++);
	printf("결론은 %d", x);*/

	//근무 일수를 연수,주수,일수로 변환하기 p.134
	/*int days, weeks, years;

	printf("총 일수를 입력하시오: ");
	scanf("%d", &days);
	years = days / 365;
	weeks = days % 365 / 7;
	days = days % 365 % 7;

	printf("%d년 %d주 %d일", years, weeks, days);
	*/

	/*int x = 10, y = 10;

	printf("x=%d y=%d\n", x, y);
	x += 1;
	printf("\"x+=1\"이후 x=%d\n", x);
	y *= 2;
	printf("\"y*=2\"이후 y=%d", y);*/

	/*int x = 9;
	int y = 10;

	printf("%08X & %08X = %08X\n", x, y, x & y);
	printf("%08X | %08X = %08X\n", x, y, x | y);
	printf("%08X ^ %08X = %08X\n", x, y, x ^ y);
	printf("~% 08X = % 08X\n", x, ~x);*/

	//int x = 9;

	//printf("%d <<1=%d\n", x,x << 1);
	//printf("%d >>1=%d\n", x,x >> 1);

	/*int i;
	double f;

	f = 5 / 4;

	printf("%lf\n", f);

	f = (double)5 / 4;
	printf("%lf\n", f);

	i = 1.3 + 1.9;
	printf("%d\n", i);

	i = (int)1.3 + (int)1.9;
	printf("%d\n", i);*/

	/*int status = 0x6f;

	if (status & 0x01 == 1) {
		printf("열렸습니다.");
	}
	else {
		printf("닫혔습니다.");
	}*/
	
	/*int x = 2 * 9 / 3 + 9;
	printf("%d \n", x);*/

//int x = 10;
//int y = 20;
//printf("%d\n", x < y);
//printf("%d\n", x == y);
//printf("%d\n", x = y);
//printf("%d\n", x != y);
//printf("%d\n", x++ );
//
//int integeri;
//
//const integer = 1000;
//integeri = 10;
//unsigned int d = .2;

//int x = 100;
//int y;
//
//y = (double)1/2*x;
//printf("%d \n", y);

//p160 1
//int kg;
//float m;
//
//printf("체중을 입력하시오: ");
//scanf("%d", &kg);
//printf("신장을 입력하시오: ");
//scanf("%f", &m);
//
//printf("BMI: %4.2f", kg / (m * m));

//p160 2
//int x, y, z;
//
//printf("정수를 3개 입력하시오: ");
//
//scanf("%d %d %d", &x, &y, &z);
//
//printf("%d*%d-%d=%d", x, y, z, x* y - z);
//
//p160 3
//float money;
//float rate;
//
//printf("상품 가격을 입력하시오: ");
//scanf("%f", &money);
//printf("할인률을 입력하시오: ");
//scanf("%f", &rate);
//printf("할인된 가격은 %f", money - (money * rate / 100));

//double language;
//double english;
//double math;
//
//printf("3과목의 점수를 입력한다: ");
//scanf("%lf %lf %lf", &language, &english, &math);
//printf("총점 =%.2f", language + english + math);
//printf("평균 =%.2f", (language + english + math) / 3);

//int x;
//int y;
//
//printf("첫 번째 정수를 입력하시오: ");
//scanf("%d", &x);
//printf("두 번째 정수를 입력하시오: ");
//scanf("%d", &y);
//printf("몫은 %d이고 나머지는 %d입니다.", x/y, x%y);

//int x;
//
//printf("정수를 입력하시오: ");
//scanf("%d", &x);
//printf("백의 자리수: %d\n", x/100);
//printf("십의 자리수: %d\n", x % 100 /10);
//printf("일의 자리수: %d\n", x % 10);

//double x;
//
//scanf("%lf", &x);
//
//printf("f(x)= %lf", (pow(x, 3) - 20) / (x - 7));

//double x, y;
//
//printf("2개의 실수를 입력하시오: ");
//scanf("%lf %lf",&x, &y);
//
//printf("합의 정수부 = %d", (int)x+(int)y);
	
//int x;
//printf("숫자를 입력하시오: ");
//scanf("%d", &x);
//printf("LSB는 %d", x & 1);

//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\중요한듯

//int x,n;
//
//printf("숫자를 입력하시오: ");
//scanf("%d", &x);
//printf("n을 입력하시오: ");
//scanf("%d", &n);
//printf("새로운 값= %d", x | (1 << n));

return 0;
}