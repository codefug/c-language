#include <stdio.h>
#define dollar_per1000won 1120
#define PI 3.141592
#include <math.h>

int main(void) {
	int x;
	int y;
	float f;
	long double l;
	
	/*printf("�޷�ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("�޷�ȭ %d�޷��� %d���Դϴ�.",x,x*dollar_per1000won);
	*/

	/*float speed;
	float distance;

	printf("���� �ӵ��� ");
	scanf("%f", &speed);
	printf("�¾�� �������� �Ÿ� ");
	scanf("%f", &distance);
	printf("���� �ð��� %f��", distance/ speed /60);*/

	/*float temp;

	printf("ȭ���µ�=");
	scanf("%f", &temp);
	printf("�����µ�=%f",(temp-32)*5/9);*/
	
	/*long long money;

	printf("�Ŵ� ���� �ݾ��� �Է��Ͻÿ�: ");
	scanf("%lld", &money);
	printf("30�� ���� ��� = %lld",30*12*money);
	*/

	/*long double ew = 12340.23412341234123412341234;

	printf("%30.25lf", ew);*/

	/*double radius;
	double area;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("���� ����: %lf", area);*/

	/*char c;

	scanf("%c", &c);
	printf("%c %d \n", c, c);
	getchar();
	c = getchar();
	printf("%c %d", c, c);*/

	/*int id, pass;

	printf("���̵�� �н����带 �Է��ϼ���.\n");
	printf("ID : ____\b\b\b\b");
	scanf("%d", &id);
	printf("PASSWORD : ____\b\b\b\b");
	scanf("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.",id,pass);*/

	/*int age, id, make, letter;
	double star;

	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);
	printf("���� : %d\n", age);
	printf("���� ���̵� �Է��Ͻÿ�: ");
	scanf("%d", &id);
	printf("���̵�: %d\n", id);
	printf("���귮�� �Է��Ͻÿ�: ");
	scanf("%d", &make);
	printf("���귮: %d\n", make);
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%lf", &star);
	printf("���� ����: %e\n", star);
	printf("���ڸ� �Է��Ͻÿ�: ");
	getchar();
	letter = getchar();
	printf("����: %c", letter);*/

	///*int number;
	//printf("%d", 0x10);*/

	//char code = 'B';
	//printf("%c\n", code + 1);
	//printf("%c\n", code - 1);

	/*printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &f);
	printf("���� �������δ� %e�Դϴ�.", f);*/

	/*long double numb;

	printf("������������ �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &numb);
	printf("�Ҽ����� ǥ���������δ� %lf", numb);*/

	/*printf("�������� �Է��Ͻÿ�: ");
	scanf("%lf", &l);
	printf("���� ǥ���� = %lf\n", 4.0 * PI * (l * l));
	printf("���� ���� = %lf", 4.0 / 3.0 * PI * (l * l * l));*/

	/*printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &l);
	printf("���׽��� ���� %lf�Դϴ�.", 3.0 * pow(l,3) - 7.0 * pow(l,2) + 9.0);*/

	//char c;

	//printf("���ڸ� �Է��Ͻÿ�: ");
	//scanf("%c", &c);
	//printf("�ƽ�Ű �ڵ�: %d", c);
	
//char a, b, c;
//
//	printf("���ڸ� �Է��Ͻÿ�: ");
//	scanf("%c %c %c", &a, &b, &c);
//	printf("����: %c %c %c", c, b, a);

printf("char���� ũ��� %d����Ʈ�Դϴ�.\n", sizeof(char));
printf("short���� ũ��� %d����Ʈ�Դϴ�.\n", sizeof(short));
printf("int���� ũ��� %d����Ʈ�Դϴ�\n", sizeof(int));
printf("long���� ũ��� %d����Ʈ�Դϴ�\n", sizeof(long));
printf("long long���� ũ��� %d����Ʈ�Դϴ�\n", sizeof(long long)); 
printf("float���� ũ��� %d����Ʈ�Դϴ�\n", sizeof(float)); 
printf("double���� ũ��� %d����Ʈ�Դϴ�\n", sizeof(double)); 
printf("long double���� ũ��� %d����Ʈ�Դϴ�\n", sizeof(long double));

//double meter;
//int hour, minute, second;
//
//printf("�Ÿ��� ���ͷ� �Է��Ͻÿ�: ");
//scanf("%lf", &meter);
//printf("�ð��� �Է��Ͻÿ�: ");
//scanf("%d", &hour);
//printf("���� �Է��Ͻÿ�: ");
//scanf("%d", &minute);
//printf("�ʸ� �Է��Ͻÿ�: ");
//scanf("%d", &second);
//printf("�ӵ�: %lf",meter/(second+(minute*60)+(hour*60*60))*60*60/1000);

	return 0;
}