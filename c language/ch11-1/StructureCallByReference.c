#include <stdio.h>

typedef struct point {
	int    x;
	int    y;
	int* px;
	int* py;
}POINT;

void callByReference(POINT pf)
{
	int temp;

	temp = *pf.px;
	*pf.px = *pf.py;
	*pf.py = temp;

	printf("address of pf.x  : %d\n", &pf.x);
	printf("address of pf.y  : %d\n", &pf.y);

	printf("address of pf.px  : %d\n", pf.px);
	printf("address of pf.py  : %d\n", pf.py);

}

int main(void)
{

	POINT p;
	p.x = 10;
	p.y = 20;

	p.px = &p.x;
	p.py = &p.y;


	printf("address of p.x  : %d\n", &p.x);
	printf("address of p.y  : %d\n", &p.y);

	printf("address of p.x  : %d\n", p.px);
	printf("address of p.y  : %d\n", p.py);


	printf("before call function: p.x: %d p.y: %d\n", p.x, p.y);

	callByReference(p);

	printf("after call function: p.x: %d p.y: %d\n", p.x, p.y);

	return 0;
}
