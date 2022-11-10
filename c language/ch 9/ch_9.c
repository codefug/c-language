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

	//num1과 num2 이 각각 가리키는 수 중 
	//큰수를 max가 가리키는 곳에, 
	//작은수를 min이 가리키는 곳에, 
	//평균을 average가 가리키는 곳에 넣으세요.
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
	
	//printf("변수 number의 값 = %d\n", *p);

	//포인터 변수는 다 4바이트이다.

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
//	printf("swap() 호출 후%d %d", a, b);
//
//	return 0;
//
		/*int a = 10, b = 20;

		swap(&a, &b);

		printf("swap() 호출후 a = % d b = % d\n",a, b);
			return 0;*/

	//int num1 = 10;
	//int num2 = 20;

	//int max;
	//int min;
	//int average;

	////myMath( ); //함수를 호출하고 인자를 알맞게 넘겨 보세요.
	//myMath(&num1, &num2, &max, &min, &average);

	//printf("max = %d, min = %d, average = %d\n", max, min, average);

}