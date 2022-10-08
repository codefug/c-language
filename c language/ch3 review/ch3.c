#include <stdio.h>
#define dollar_per1000won 1120
#define PI 3.141592
#include <math.h>

int main(void) {
	int x;
	int y;
	float f;
	long double l;
	
	/*printf("달러화 금액을 입력하시오: ");
	scanf("%d", &x);
	printf("달러화 %d달러는 %d원입니다.",x,x*dollar_per1000won);
	*/

	/*float speed;
	float distance;

	printf("빛의 속도는 ");
	scanf("%f", &speed);
	printf("태양과 지구와의 거리 ");
	scanf("%f", &distance);
	printf("도달 시간은 %f분", distance/ speed /60);*/

	/*float temp;

	printf("화씨온도=");
	scanf("%f", &temp);
	printf("섭씨온도=%f",(temp-32)*5/9);*/
	
	/*long long money;

	printf("매달 저축 금액을 입력하시오: ");
	scanf("%lld", &money);
	printf("30년 후의 재산 = %lld",30*12*money);
	*/

	/*long double ew = 12340.23412341234123412341234;

	printf("%30.25lf", ew);*/

	/*double radius;
	double area;

	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("원의 면적: %lf", area);*/

	/*char c;

	scanf("%c", &c);
	printf("%c %d \n", c, c);
	getchar();
	c = getchar();
	printf("%c %d", c, c);*/

	/*int id, pass;

	printf("아이디와 패스워드를 입력하세요.\n");
	printf("ID : ____\b\b\b\b");
	scanf("%d", &id);
	printf("PASSWORD : ____\b\b\b\b");
	scanf("%d", &pass);
	printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.",id,pass);*/

	/*int age, id, make, letter;
	double star;

	printf("나이를 입력하시오: ");
	scanf("%d", &age);
	printf("나이 : %d\n", age);
	printf("직원 아이디를 입력하시오: ");
	scanf("%d", &id);
	printf("아이디: %d\n", id);
	printf("생산량을 입력하시오: ");
	scanf("%d", &make);
	printf("생산량: %d\n", make);
	printf("별의 개수를 입력하시오: ");
	scanf("%lf", &star);
	printf("별의 개수: %e\n", star);
	printf("글자를 입력하시오: ");
	getchar();
	letter = getchar();
	printf("글자: %c", letter);*/

	///*int number;
	//printf("%d", 0x10);*/

	//char code = 'B';
	//printf("%c\n", code + 1);
	//printf("%c\n", code - 1);

	/*printf("실수를 입력하시오: ");
	scanf("%f", &f);
	printf("지수 형식으로는 %e입니다.", f);*/

	/*long double numb;

	printf("지수형식으로 실수를 입력하시오: ");
	scanf("%lf", &numb);
	printf("소수ㅜ점 표시형식으로는 %lf", numb);*/

	/*printf("반지름을 입력하시오: ");
	scanf("%lf", &l);
	printf("구의 표면적 = %lf\n", 4.0 * PI * (l * l));
	printf("구의 부피 = %lf", 4.0 / 3.0 * PI * (l * l * l));*/

	/*printf("x의 값을 입력하시오: ");
	scanf("%lf", &l);
	printf("다항식의 값은 %lf입니다.", 3.0 * pow(l,3) - 7.0 * pow(l,2) + 9.0);*/

	//char c;

	//printf("문자를 입력하시오: ");
	//scanf("%c", &c);
	//printf("아스키 코드: %d", c);
	
//char a, b, c;
//
//	printf("문자를 입력하시오: ");
//	scanf("%c %c %c", &a, &b, &c);
//	printf("문자: %c %c %c", c, b, a);

printf("char형의 크기는 %d바이트입니다.\n", sizeof(char));
printf("short형의 크기는 %d바이트입니다.\n", sizeof(short));
printf("int형의 크기는 %d바이트입니다\n", sizeof(int));
printf("long형의 크기는 %d바이트입니다\n", sizeof(long));
printf("long long형의 크기는 %d바이트입니다\n", sizeof(long long)); 
printf("float형의 크기는 %d바이트입니다\n", sizeof(float)); 
printf("double형의 크기는 %d바이트입니다\n", sizeof(double)); 
printf("long double형의 크기는 %d바이트입니다\n", sizeof(long double));

//double meter;
//int hour, minute, second;
//
//printf("거리를 미터로 입력하시오: ");
//scanf("%lf", &meter);
//printf("시간을 입력하시오: ");
//scanf("%d", &hour);
//printf("분을 입력하시오: ");
//scanf("%d", &minute);
//printf("초를 입력하시오: ");
//scanf("%d", &second);
//printf("속도: %lf",meter/(second+(minute*60)+(hour*60*60))*60*60/1000);

	return 0;
}