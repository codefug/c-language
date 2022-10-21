#include <stdio.h>
#include <Windows.h>
#include <math.h>
n = 120;
int main(void) {
	int n = 32;
	// a ? b : c 가능 ㅇㅇ if 없어도 됨
	/*int month;

	scanf("%d", &month);

	switch (month) {
	case 1:
		printf("%d", 123);
	case 2: case 3: case 4:
		printf("%d", 234);
		return 0;
	}*/

	/*HDC hdc = GetWindowDC(GetForegroundWindow());
	Rectangle(hdc, 100, 100, 200, 200);
	Ellipse(hdc, 100, 100, 200, 200);*/

	/*srand(time(NULL));

	printf("%d", rand()%101+100);*/
	switch (1) {
	case 1: printf("야호");
		int n=1;
	case 2: printf("유하");
		n += 1;
		break;
	case 3: printf("쿠후");
	}
	printf("%d", n);
	//printf("%f", x);
}