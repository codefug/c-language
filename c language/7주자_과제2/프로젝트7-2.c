#include <stdio.h>

int sum(int n)
{
	static int count = 0;
	count++;
	printf("�Լ��� ȣ��� �� ȸ���� %d�Դϴ�.\n", count);
	if (n == 1)
		return 1;
	return n + sum(n - 1);
}

int main(void) {

	int x = 0, result;

	printf("������ �Է��Ͻÿ�:");

	scanf("%d", &x);

	result = sum(x);

	printf("%d ���� ��� ���� ���� %d�Դϴ�.\n", x, result);

	return 0;
}