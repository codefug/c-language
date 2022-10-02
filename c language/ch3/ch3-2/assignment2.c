#include <stdio.h>

int main(void) {
	float x;
	float y;

	printf("빛의 속도는 ");

	scanf("%f", &x);
	
	printf("태양과 지구와의 거리 ");

	scanf("%f", &y);
	
	printf("도달 시간은 %f", y / (x*60));

	return 0;
}