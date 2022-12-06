#include "array.h"

int main(void) {

	int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
	print_array(numbers,sizeof(numbers)/4);
	printf("배열 요소들의 합= %d", get_sum_of_array(numbers,sizeof(numbers)/4));

	return 0;
}