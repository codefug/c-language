#include <stdio.h>
#include <Windows.h>
#define student 16
#define size 10
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int minimum = rand() % 11;
	int prices[student] = {0};
	int i;

	for (i = 0; i < student; i++){
		if (prices[i] <= minimum) {
			minimum = prices[i];
			printf("%d \n", prices[i]);
		}
	}
			return 0;
}