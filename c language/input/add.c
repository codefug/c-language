#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	//int sum;
	//int sub;
	//int multi;

	printf("�� ���� ���ڸ� �Է��Ͻÿ�");
	scanf("%d %d %d", & x,&y,&z);

	//sum = x + y +z;
	//sub = x - y -z;
	//multi = x * y *z;

	printf("�� ���� ��:%d\n�� ���� ��:%d\n�� ���� ��:%d\n�� ���� ������:%d\n",x+y+z,x-y-z,x*y*z,x/y/z);
	printf("�ۼ�Ʈ�� ���� �� %%:%d", x % y);
	return 0;
}