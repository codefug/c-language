#include <stdio.h>

int main(void)
{
	int sum;
	int price;
	int days;

	printf("������ ����ΰ���?");
	scanf("%d", &days);
	
	printf("�װ��� ������ ���ΰ���?");
	scanf("%d", &sum);

	printf("ȣ�� 1�� ����:");
	scanf("%d", &price);
	sum = sum + days * price;

	printf("�Ϸ翡 �ʿ��� �뵷:");
	scanf("%d", &price);
	sum = sum + days * price;

	printf("==================================\n");
	printf("�� ���� ���:%d\n", sum);
	printf("==================================\n");

	return 0;
}