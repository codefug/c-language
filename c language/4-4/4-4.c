#include <stdio.h>

int main(void) 
{
	int money;
	int item;
	int result;

	printf("������ �� :");
	scanf("%d", &money);

	printf("���ǰ�:");
	scanf("%d", &item);

	result = money - item;
	printf("�Ž�����:%d\n",result);

	printf("100�� ������ ����:%d\n", result / 100);

	printf("10�� ������ ����:%d\n", (result % 100) / 10);

	return 0;
}