#include <stdio.h>
#define DEBUG

double average(int* x) {
	double result = 0;
	int i;

#ifdef DEBUG
	printf("�迭�� ����� ����մϴ�.\naverage()\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");

#endif
	for (i = 0; i < 10; i++) {
		result += x[i];
#ifdef DEBUG
		printf("%d�� ���ϴ� ��\n", x[i]);
#endif
	}

	result /= 10;
#ifdef DEBUG
	printf("���= %lf\n", result);
#endif
	return result;
}

int main(void)
{
	int number[10] = { 1,2,3,4,5,6,7,8,9,10 };
	double sum = average(number);

#ifdef DEBUG
	printf("�迭�� ���= %lf\n", sum);
#endif
	return 0;

}