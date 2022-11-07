#include <stdio.h>
#define SIZE 5
double get_array_avg(int*, int);
void print_array(int*, int);

int main(void)
{
	int i;
	int data[SIZE] = { 20, 10, 30, 50, 40 };
	double result;

	print_array(&data, SIZE);
	result = get_array_avg(&data,SIZE);

	printf("배열 원소들의 평균 = %f\n", result);

	return 0;
}

void print_array(int* ptr, int num) {
	int i;

	printf("[");
	for (i = 0; i < num; i++) {
		printf(" %d ", *(ptr + i));
	}
	printf("]\n");
}

double get_array_avg(int* ptr, int num) {
	int i;
	double sum = 0.0;

	for (i = 0; i < num; i++) {
		sum += *ptr++;
	}

	return sum / num;
}