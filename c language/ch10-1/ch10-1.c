#include <stdio.h> //주어진 문자열을 한 문자씩 정확하게 치면 correct 라고 출력되게 하세요.
//틀리면 바로 종료 되게 하세요.

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
