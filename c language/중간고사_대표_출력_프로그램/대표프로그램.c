#include <stdio.h>

int main(void) {
	int i = 1;

	printf("%d��\n", i);
	i += 1;
	printf("Hello World!\n");
	//hello world�� ����϶�.


	printf("%d��\n", i);
	i += 1;
	int e = 1;

	//�������� �Ϻθ� ����غ���
	printf("3 X %d = %d\n", e, e * 3);
	e += 1;
	printf("3 X %d = %d\n", e, e * 3);
	e += 1;
	printf("3 X %d = %d\n", e, e * 3);
	e += 1;

	//����ڷκ��� �� ���� �޾Ƽ� ���� �Ŀ�, ����� ����غ���.
	int q;
	int w;
	printf("ù ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &q);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &w);
	printf("�� ���� �� =%d", q + w);

	//���� ����� ������ִ� ���α׷��� �ۼ��غ���.
	int day;
	int price;
	int allowance;
	int hotel;

	printf("������ ����ΰ���?: ");
	scanf("%d", &day);
	printf("�װ��� ����: ");
	scanf("%d", &price);
	printf("ȣ�� 1�� ����: ");
	scanf("%d", &hotel);
	printf("�Ϸ翡 �ʿ��� �뵷: ");
	scanf("%d", &allowance);
	printf("====================\n");
	printf("�� ���� ���:%d\n",day*(allowance+hotel)+price);
	printf("====================\n");

	printf("%d��\n", i);
	i += 1;

	printf("%d��\n", i);
	i += 1;

	printf("%d��\n", i);
	i += 1;

	printf("%d��\n", i);
	i += 1;

	printf("%d��\n", i);
	i += 1;

	printf("%d��\n", i);
	i += 1;

}