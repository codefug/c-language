#include <stdio.h>

int main(void) {
	float x;
	float y;

	printf("���� �ӵ��� ");

	scanf("%f", &x);
	
	printf("�¾�� �������� �Ÿ� ");

	scanf("%f", &y);
	
	printf("���� �ð��� %f", y / (x*60));

	return 0;
}