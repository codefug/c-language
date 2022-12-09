#include <stdio.h>
#include <string.h>

int main(void)
{
	char array[6] = { 'a','b','c' };
	int i;

	for (i = 0; i < strlen(array); i++)
		printf("%c", array[i]);
}
