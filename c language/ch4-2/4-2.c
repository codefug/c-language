#include <stdio.h>

int main(void)
{
	int input, minute, second;

	printf("�� ������ �ð��� �Է��Ͻÿ�: (32�� �� ����) ");

	scanf("%d", &input);

	second = input % 60;

	minute = input / 60;

	printf("%d�ʴ� %d�� %d���Դϴ�: \n",input,minute,second);

	return 0;

}