#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>
#define SIZE 100

struct point {
	int x;
	int y;
};

int main(void)
{
	//struct point p1, p2;

	//double xdiff, ydiff;
	//double dist;
	//printf("점의 좌표를 입력하시오(x  y): ");
	//scanf("%d %d", &p1.x, &p1.y);

	//printf("점의 좌표를 입력하시오(x  y): ");
	//scanf("%d %d", &p2.x, &p2.y);

	//xdiff = p1.x - p2.x;
	//ydiff = p1.y - p2.y;

	//dist = sqrt(xdiff * xdiff + ydiff * ydiff);


	////sqrt(x); ->x의 루트값을 return하는 함수 

	//printf("두 점사이의 거리는 %f입니다.\n", dist);

	struct point p[SIZE];
	int i;

	for (int i = 0; i < SIZE; i++) {
		p[i].x = rand() % 500;
		p[i].y = rand() % 500;
	}
	HDC hdc = GetWindowDC(GetForegroundWindow());
	for (int i = 0; i < SIZE; i++) {
		Ellipse(hdc, p[i].x, p[i].y, p[i].x + 10, p[i].y + 10);
	}


	return 0;
}
