#include "array.h"

int get_sum_of_array(int* list,int size) {
	int result=0, i;

	for (i = 0; i < size; i++) {
		result += list[i];
	}

	return result;
}

void print_array(int* list,int size) {
	int i;
	printf("[ ");
	for (i = 0; i < size; i++) {
		printf("%d ", list[i]);
	}
	printf("]\n");
}