#include <stdio.h>
#include<stdlib.h>

// ��ȭ�� ����ü�� ǥ��
struct movie
{
	char title[100];	// ��ȭ ����
	double rating;	// ��ȭ ����
};

int main(void)
{
	struct movie* ptr;
	int i, n;

	printf("��ȭ�� ����: ");
	scanf("%d", &n);

	ptr = (struct moive*)malloc(n * sizeof(struct movie));

	if (ptr == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	for (i = 0; i < n; i++) {
		printf("��ȭ ����: ");
		scanf("%s", ptr[i].title);
		printf("��ȭ ����: ");
		scanf("%lf", &ptr[i].rating);
	}
	printf("\n=================\n");
	for (i = 0; i < n; i++) {
		printf("��ȭ ����: %s\n", ptr[i].title);
		printf("��ȭ ����: %lf\n", ptr[i].rating);
	}

	free(ptr);
	return 0;
}
