#include <stdio.h>

#define SIZE 6

char mystrcpy(char *array1, char *array2) {

	int i = 0;
	int len = strlen(array2);

	for (i = 0; i < len; i++) {
		*array1 = *array2;
		array1++;
		array2++;
	}
	*array1 = '\0';

	return array1;
}

int main(void)
{
	int i, k;
	char fruits[SIZE][20] = {
		"pineapple",
		"banana",
		"apple",
		"tomato",
		"pear",
		"avocado"
	};
	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (strcmp(fruits[i], fruits[i + 1]) > 0) {
				char tmp[20];
				mystrcpy(tmp, fruits[i]);
				mystrcpy(fruits[i], fruits[i + 1]);
				mystrcpy(fruits[i + 1], tmp);
			}
		}
	}
	for (k = 0; k < SIZE; k++)
		printf("%s \n", fruits[k]);
	return 0;
}