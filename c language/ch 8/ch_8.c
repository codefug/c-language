#include <stdio.h>
#include <stdlib.h>
# include<math.h>
# include<Windows.h>

void print_name()
{
	printf("함수");
}

int add(int x, int y) {
	int result;

	result = x + y;
	return result;
}

// float int 리턴 값이 없으면 void 적으면 된다.

int get_integer() {
	int integer;
	scanf("%d", &integer);
	return integer;
}

void sum_integer(int x, int y) {
	printf("%d\n",x + y);
}
void sub_integer(int x, int y) {
	printf("%d\n", x - y);
}
void mul_integer(int x, int y) {
	printf("%d\n", x * y);
}

int get_ranNumber() {
	return rand() % 101 + 100;
}

int isPrime(int i) {
	int j;
	for (j = 2; j < i; j++)
		if (i % j == 0)
			return 0;
	return 1;
}

void print_Primes(int x) {

	int i;
	for (i = 2; i < x; i++)
		if (isPrime(i))
			printf("%d ", i);
	printf("\n");
}

//void neo_primes(int numb) {
//	int i;
//	int j=2;
//	int li[200];
//
//	li[0] = 1;
//	li[1] = 1;
//
//	for (i = 2; i*j < numb / 2; i++)
//		for (j = i; i * j < numb; j++)
//			li[i * j] = 1;
//
//	for (i = 2; i < numb; i++)
//		if (li[i] == 0)
//			printf("%d", li[i]);
//}

int sum(int n)
{
	static int count = 0;
	count++;
	printf("함수가 호출된 총 회수는 %d입니다.\n",count);
	if (n == 1)
		return 1;
	return n + sum(n - 1);
}


int main(void) {

	/*print_name();
	printf("%d\n",add(1, 2));
	
	int x = get_integer();
	int y = get_integer();

	sum_integer(x, y);
	sub_integer(x, y);
	mul_integer(x, y);*/

	//int x = get_ranNumber();
	//print_Primes(x);

	//int x = get_ranNumber();
	//neo_primes(x);

	int x = 0, result;

	printf("정수를 입력하시오:");
	scanf("%d", &x);

	result = sum(x);
	printf("%d 이하 모든 수의 합은 %d입니다.\n", x, result);

	return 0;
}

