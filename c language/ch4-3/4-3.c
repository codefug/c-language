#include <stdio.h>

int main(void)
{
	int money;
	int candy;
	int result;

	printf("���� ������ �ִ� �� : ");
	scanf("%d", &money);

	printf("ĵ���� ���� : ");
	scanf("%d", &candy);

	result = money / candy;
	printf("�ִ�� �� �� �ִ� ĵ���� ���� : %d\n",result);

	result = money % candy;
	printf("ĵ���� �� ���� ��: %d\n", result);
		
	return 0;
}