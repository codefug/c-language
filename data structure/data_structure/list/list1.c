#include <stdio.h>
#include <stdlib.h>
#define maxn 100

typedef int element;

typedef struct {
	element array[maxn];
	int size;
}list;

void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init(list* l) {
	l->size = 0;
}

int is_empty(list* l) {
	return l->size == 0;
}

int is_full(list* l) {
	return l->size == maxn;
}

element get_entry(list* l, int pos) {
	if (pos < 0 || pos >= l->size)
		error("오류");
	return l->array[pos];
}

void print_list(list* l) {
	int i;
	for (i = 0; i < l->size; i++) {
		printf("%d->", l->array[i]);
	}
	printf("\n");
}

void insert_last(list* l, element item) {
	if (l->size >= maxn)
		error("초과");
	l->array[l->size++] = item;
}

void insert(list* l, int pos, element item) {
	if (!is_full(l) && pos >= 0 && pos <= l->size) {
		for (int i = (l->size - 1); i >= pos; i--) {
			l->array[i + 1] = l->array[i];
		}
		l->array[pos] = item;
		l->size++;
	}
}
element delete(list* l, int pos) {
	element item;
	if (pos < 0 || pos >= l->size)
		error("위치 오류");
	item = l->array[pos];
	for (int i = pos; i < (l->size - 1); i++)
		l->array[i] = l->array[i + 1];
	l->size--;
	return item;
}

int main(void)
{
	// ArraylistType를 정적으로 생성하고 ArraylistType를 	
	// 가리키는 포인터를 함수의 매개변수로 전달한다.
	list l;

	init(&l);
	insert(&l, 0, 10);	print_l(&l);	// 0번째 위치에 10 추가
	insert(&l, 0, 20);	print_l(&l);	// 0번째 위치에 20 추가
	insert(&l, 0, 30);	print_l(&l);	// 0번째 위치에 30 추가
	insert_last(&l, 40);	print_l(&l);	// 맨 끝에 40 추가
	delete(&l, 0);		print_l(&l);	// 0번째 항목 삭제
	return 0;
}
