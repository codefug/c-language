#include <stdio.h>
#define SIZE 5
double get_array_avg(int values[], int n);
void print_array(int values[], int n);

void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void myMath(int* num1, int* num2, int* max, int* min, int* average)
{
	if (*num1 > *num2) {
		*max = *num1;
		*min = *num2;
	}
	else {
		*max = *num2;
		*min = *num1;
	}
	*average = (*num1 + *num2) / 2;

	//num1�� num2 �� ���� ����Ű�� �� �� 
	//ū���� max�� ����Ű�� ����, 
	//�������� min�� ����Ű�� ����, 
	//����� average�� ����Ű�� ���� ��������.
}

int main(void) {

	//int i = 10;
	//char c = 69;
	//float f = 12.3;

	//printf("%u %u %u", &i, &c, &f);

	int number = 20;

	int* p;
	int v=0;

	p = &number;
	
	//printf("���� number�� �� = %d\n", *p);

	//������ ������ �� 4����Ʈ�̴�.

	p = 20;

	printf("1 %u\n", v);

	v=*++p;

	printf("2 %u\n", v);
	p--;
	v=++*p;

	printf("1 %u\n", v);

	return 0;

//	int a = 100;
//	int b = 200;
//
//	printf("%d %d\n", a, b);
//	swap(a, b);
//	printf("swap() ȣ�� ��%d %d", a, b);
//
//	return 0;
//
		/*int a = 10, b = 20;

		swap(&a, &b);

		printf("swap() ȣ���� a = % d b = % d\n",a, b);
			return 0;*/

	//int num1 = 10;
	//int num2 = 20;

	//int max;
	//int min;
	//int average;

	////myMath( ); //�Լ��� ȣ���ϰ� ���ڸ� �˸°� �Ѱ� ������.
	//myMath(&num1, &num2, &max, &min, &average);

	//printf("max = %d, min = %d, average = %d\n", max, min, average);

}