#include <stdio.h> //�־��� ���ڿ��� �� ���ھ� ��Ȯ�ϰ� ġ�� correct ��� ��µǰ� �ϼ���.
//Ʋ���� �ٷ� ���� �ǰ� �ϼ���.

int main(void)
{
	char str[] = "incheon";
	int i = 0;

	printf("%s\n", str);

	while (str[i] != 0)
	{
		printf("input: ");
		char ch = getch();
		printf("%c\n", ch);
		if (str[i++] == ch) {
			continue;
		}
		else
		{
			printf("wrong!!");
			exit(0);
		}
	}
	printf("correct!!");
	return 0;
}
