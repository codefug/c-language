#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(void) {

	/*int i = 0;

	while (i <= 10){++i;
		printf("%d\n", i);}
		*/

		/*int meter;
		int i = 0;

		while (i < 3)
		{
			meter = i * 1609;
			printf("%d마일은 %d미터입니다.\n", i++, meter);
		}*/

		/*int i = 5;
		long factorial = 1;

		while (i != 0)
		{
			factorial *= i--;
		}

		printf("%d \n", factorial);*/

		/*int n;
		int i = 1;

		printf("구구단 중에서 출력하고 싶은 단을 입력하시오: ");

		scanf("%d", &n);

		while (i <= 9)
		{
			printf("%d * %d = %d\n", n, i, n * i);
			i++;
		}*/

		//int n;

		//printf("================\n");
		//printf("    n         n  \n");
		//printf("================\n");

		//n = 1;
		//while (n <= 10) {
		//	printf("%5d     %5d  \n", n, n * n);
		//	n++;
		//}

		/*int n,sum=0;

		printf("1부터 어디까지 더할래: ");
		scanf("%d", &n);

		while (n != 0)
		{
			sum += n;
			n--;
		}
		printf("%d", sum);
			*/

			/*HDC hdc = GetWindowDC(GetForegroundWindow());
			int x = 30, y = 100, i = 0;

			while (i != 9){
			Rectangle(hdc, x+i*100, y, x + (i+1)*100, y+100);
			x += 10;
			i++;
			}*/

			/*do {
				printf("하하하");
			} while (3 < 2);*/

			/*int i;
			do {
				printf("1,2,3");
					scanf("%d", &i);
			} while (i < 1 || i>3);*/

			//int x, y, z;

			/*printf("정수를 입력하세요");
			scanf("%d", &x);*/
			//
			//srand(time(NULL));
			//x = rand() % 99 + 1;

			//do {
			//	printf("뭘까요?: ");
			//	scanf("%d", &y);
			//	if (x > y) {
			//		printf("더 커용\n");
			//	}
			//	else if (x < y) {
			//		printf("자가용\n");
			//	}
			//	else {
			//		printf("정답\n");
			//	}
			//} while (y != x);	

			/*int i;

			for (i = 0; i < 10; i++) {
				printf("%d", i);
			}*/

			/*int i;
			printf("**********\n");
			for (i = 0; i < 5; i++)
			{
				printf("*        *\n");
			}
			printf("**********\n");*/

			/*long fact = 1;
			int j;

			printf("원하는 팩토리얼은?: ");

			scanf("%d", &j);

			for (; j != 0; j--) {
				fact *= j;
				if (j != 1)
					printf("%d*",j);
				else
					printf("%d=", j);
			}
			printf("%d", fact);*/
			//
			//int x, y;
			//
			//for (y = 0; y < 5; y++) {
			//	for (x = 0; x < 10; x++) {
			//		printf("*");
			//	}
			//	printf("\n");
			//}

	//int x, y,z;
	//z = 0;
	//for (y = 10; y != 0; y -= 2) {
	//	for (; z -= 0; z--) {
	//		printf(" ");
	//	}
	//	for (x = y; x != 0; x--) {
	//		printf("*");
	//	}
	//	printf("\n");
	//	z = (12 - y) / 2;
	//}
	//z = 4;
	//for (y = 2; y != 12; y += 2) {
	//	for (; z -= 0; z--) {
	//		printf(" ");
	//	}
	//	for (x = y; x != 0; x--) {
	//		printf("*");
	//	}
	//	printf("\n");
	//	z = (8 - y) / 2;
	//}
	

//int i, k;
//
//for (i = 1; i <= 9; i++)
//for (k = 1; k <= 9; k++)
//printf("%d * %d = %d\n", i, k, i * k);

HDC hdc = GetWindowDC(GetForegroundWindow());

Rectangle(hdc, 100, 100, 200, 200);

	return 0;
}