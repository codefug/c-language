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
			printf("%d������ %d�����Դϴ�.\n", i++, meter);
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

		printf("������ �߿��� ����ϰ� ���� ���� �Է��Ͻÿ�: ");

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

		printf("1���� ������ ���ҷ�: ");
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
				printf("������");
			} while (3 < 2);*/

			/*int i;
			do {
				printf("1,2,3");
					scanf("%d", &i);
			} while (i < 1 || i>3);*/

			//int x, y, z;

			/*printf("������ �Է��ϼ���");
			scanf("%d", &x);*/
			//
			//srand(time(NULL));
			//x = rand() % 99 + 1;

			//do {
			//	printf("�����?: ");
			//	scanf("%d", &y);
			//	if (x > y) {
			//		printf("�� Ŀ��\n");
			//	}
			//	else if (x < y) {
			//		printf("�ڰ���\n");
			//	}
			//	else {
			//		printf("����\n");
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

			printf("���ϴ� ���丮����?: ");

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