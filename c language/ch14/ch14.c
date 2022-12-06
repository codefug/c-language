#include <stdio.h>
#define DEBUG

double average(int* x) {
	double result = 0;
	int i;

#ifdef DEBUG
	printf("배열의 평균을 계산합니다.\naverage()\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");

#endif
	for (i = 0; i < 10; i++) {
		result += x[i];
#ifdef DEBUG
		printf("%d를 더하는 중\n", x[i]);
#endif
	}

	result /= 10;
#ifdef DEBUG
	printf("평균= %lf\n", result);
#endif
	return result;
}

int main(void)
{
	int number[10] = { 1,2,3,4,5,6,7,8,9,10 };
	double sum = average(number);

#ifdef DEBUG
	printf("배열의 평균= %lf\n", sum);
#endif
	return 0;

}