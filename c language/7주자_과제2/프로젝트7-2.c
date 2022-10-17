#include <stdio.h>

int sum(int n)
{
	static int count = 0;
	count++;
	printf("함수가 호출된 총 회수는 %d입니다.\n", count);
	if (n == 1)
		return 1;
	return n + sum(n - 1);
}

int main(void) {

	int x = 0, result;

	printf("정수를 입력하시오:");

	scanf("%d", &x);

	result = sum(x);

	printf("%d 이하 모든 수의 합은 %d입니다.\n", x, result);

	return 0;
}