#include <stdio.h>
#include <math.h>

int main(void) {

	//�ñ��ؼ� �غ�
	/*char x='b';

	printf("%f", (float)x);*/
	
	/*int money;
	int item;
	int change;

	printf("������ ��: ");
	scanf("%d", &money);
	printf("���ǰ�: ");
	scanf("%d", &item);
	change = money - item;
	printf("�Ž�����: %d\n\n", change);

	printf("100�� ������ ����: %d\n", change / 100);
	printf("10�� ������ ����: %d", change % 100 / 10);
	*/

	/*double x;
	double y;

	x = 2;
	y = 3.0 * x * x + 7.0 * x + 9.0;

	printf("y=3.0*x*x+7.0*x+9.0=%lf", y);*/

	/*double x;
	double y;
	int z;

	printf("�ʱ����ݾ�: ");
	scanf("%lf", &x);
	printf("����: ");
	scanf("%lf", &y);
	printf("����Ⱓ: ");
	scanf("%d", &z);
	printf("%d�� ���� ������= %lf", z, (x * pow(1 + y, z)));
	*/

	/*int x;
	
	scanf("%d", &x);
	printf("x�� ����������Ű�� %d\n", ++x);
	printf("�� �Ŀ� ���� ������Ű�� %d\n", x++);
	printf("����� %d", x);*/

	//�ٹ� �ϼ��� ����,�ּ�,�ϼ��� ��ȯ�ϱ� p.134
	/*int days, weeks, years;

	printf("�� �ϼ��� �Է��Ͻÿ�: ");
	scanf("%d", &days);
	years = days / 365;
	weeks = days % 365 / 7;
	days = days % 365 % 7;

	printf("%d�� %d�� %d��", years, weeks, days);
	*/

	/*int x = 10, y = 10;

	printf("x=%d y=%d\n", x, y);
	x += 1;
	printf("\"x+=1\"���� x=%d\n", x);
	y *= 2;
	printf("\"y*=2\"���� y=%d", y);*/

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
		printf("���Ƚ��ϴ�.");
	}
	else {
		printf("�������ϴ�.");
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
//printf("ü���� �Է��Ͻÿ�: ");
//scanf("%d", &kg);
//printf("������ �Է��Ͻÿ�: ");
//scanf("%f", &m);
//
//printf("BMI: %4.2f", kg / (m * m));

//p160 2
//int x, y, z;
//
//printf("������ 3�� �Է��Ͻÿ�: ");
//
//scanf("%d %d %d", &x, &y, &z);
//
//printf("%d*%d-%d=%d", x, y, z, x* y - z);
//
//p160 3
//float money;
//float rate;
//
//printf("��ǰ ������ �Է��Ͻÿ�: ");
//scanf("%f", &money);
//printf("���η��� �Է��Ͻÿ�: ");
//scanf("%f", &rate);
//printf("���ε� ������ %f", money - (money * rate / 100));

//double language;
//double english;
//double math;
//
//printf("3������ ������ �Է��Ѵ�: ");
//scanf("%lf %lf %lf", &language, &english, &math);
//printf("���� =%.2f", language + english + math);
//printf("��� =%.2f", (language + english + math) / 3);

//int x;
//int y;
//
//printf("ù ��° ������ �Է��Ͻÿ�: ");
//scanf("%d", &x);
//printf("�� ��° ������ �Է��Ͻÿ�: ");
//scanf("%d", &y);
//printf("���� %d�̰� �������� %d�Դϴ�.", x/y, x%y);

//int x;
//
//printf("������ �Է��Ͻÿ�: ");
//scanf("%d", &x);
//printf("���� �ڸ���: %d\n", x/100);
//printf("���� �ڸ���: %d\n", x % 100 /10);
//printf("���� �ڸ���: %d\n", x % 10);

//double x;
//
//scanf("%lf", &x);
//
//printf("f(x)= %lf", (pow(x, 3) - 20) / (x - 7));

//double x, y;
//
//printf("2���� �Ǽ��� �Է��Ͻÿ�: ");
//scanf("%lf %lf",&x, &y);
//
//printf("���� ������ = %d", (int)x+(int)y);
	
//int x;
//printf("���ڸ� �Է��Ͻÿ�: ");
//scanf("%d", &x);
//printf("LSB�� %d", x & 1);

//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\�߿��ѵ�

//int x,n;
//
//printf("���ڸ� �Է��Ͻÿ�: ");
//scanf("%d", &x);
//printf("n�� �Է��Ͻÿ�: ");
//scanf("%d", &n);
//printf("���ο� ��= %d", x | (1 << n));

return 0;
}