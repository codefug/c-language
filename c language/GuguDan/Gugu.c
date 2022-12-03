#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
	int number;
	char title[100];
};

int main(void)
{
	struct Book* p;

	p = (struct Book*)malloc(2 * sizeof(struct Book));

	if (p == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	p[0].number = 1;		// (*p).number = 1
	strcpy(p[0].title, "C Programming");

	p[1].number = 2;	// (*p+1).number = 2
	strcpy(p[1].title, "Data Structure");

	printf("%d", p[0].number);
	printf("%d", p[1].number);
	printf("%s", p[0].title);
	printf("%s", &p[1].number);
	free(p);
	return 0;
}