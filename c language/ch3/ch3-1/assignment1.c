#include <stdio.h>
#define EXCHANGE_RATE 1120

int main(void) {

	int used;
	int	krw;

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ�: ");

	scanf("%d", &used);
	
	krw = used * EXCHANGE_RATE;
	
	printf("�޷�ȭ %d�޷��� %d ���Դϴ�.",used,krw);

	return 0;
}