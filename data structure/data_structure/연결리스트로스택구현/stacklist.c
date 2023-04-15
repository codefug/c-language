#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct {
	element data;
	struct list* link;
}list;

typedef struct {
	list* top;
}stacklist;

void init(stacklist* l){
	l->top = NULL;
}

int is_empty(stacklist* l) {
	return (l->top == NULL);
}

int is_full(stacklist* l) {
	return 0;
}

void push(stacklist* l, element data) {
	list* p = (list*)malloc(sizeof(list));
	p->data = data;
	p->link = l->top;
	l->top = p;
}

element pop(stacklist* l) {
	if (is_empty) {
		fprintf(stderr, "스택 비어있음");
		exit(1);
	}
	list* tmp = l->top;
	element answer = tmp->data;
	l->top = l->top->link;
	free(tmp);
	return answer;
}

void print_stack(stacklist* l) {
	list* p = l->top;
	for (p; p != NULL; p = p->link) {
		printf("%d->", p->data);
	}
	printf("NULL\n");
}

// 주 함수
int main(void)
{
	stacklist s;
	init(&s);
	push(&s, 1); print_stack(&s);
	push(&s, 2); print_stack(&s);
	push(&s, 3); print_stack(&s);
	pop(&s); print_stack(&s);
	pop(&s); print_stack(&s);
	pop(&s); print_stack(&s);
	return 0;
}
