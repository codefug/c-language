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
	//printf("���� ��ǥ�� �Է��Ͻÿ�(x  y): ");
	//scanf("%d %d", &p1.x, &p1.y);

	//printf("���� ��ǥ�� �Է��Ͻÿ�(x  y): ");
	//scanf("%d %d", &p2.x, &p2.y);

	//xdiff = p1.x - p2.x;
	//ydiff = p1.y - p2.y;

	//dist = sqrt(xdiff * xdiff + ydiff * ydiff);


	////sqrt(x); ->x�� ��Ʈ���� return�ϴ� �Լ� 

	//printf("�� �������� �Ÿ��� %f�Դϴ�.\n", dist);

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
