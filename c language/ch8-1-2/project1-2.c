#include <stdio.h>
#include <stdlib.h>

int get_ranNumber() {
	int number;
	srand(time(NULL));
	number = rand() % 101 + 100;
	return number;
}

int isPrimes(x) {
	int j;
	for (j = 2; j < x; j++)
		if (x % j == 0)
			return 0;
	return 1;
}
int print_Primes(x) {
	int i;
	for (i = 2; i < x; i++) {
		if (isPrimes(i))
			printf("%d\n", i);
	}
}
int main(void) {
	int x = get_ranNumber();	// 함수를 호출한다. 
	print_Primes(x);
	return 0;
}