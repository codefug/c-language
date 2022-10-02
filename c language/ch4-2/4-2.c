#include <stdio.h>

int main(void)
{
	int input, minute, second;

	printf("초 단위의 시간을 입력하시오: (32억 초 이하) ");

	scanf("%d", &input);

	second = input % 60;

	minute = input / 60;

	printf("%d초는 %d분 %d초입니다: \n",input,minute,second);

	return 0;

}