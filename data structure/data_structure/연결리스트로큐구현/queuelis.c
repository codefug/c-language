#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct {
	element data;
	struct list* link;
}list;

typedef struct {
	list* front;
	list* rear;
}stackqueue;

void init(stackqueue* q) {
	q->front = NULL;
	q->rear = NULL;
}

int is_empty(stackqueue* q) {
	return (q->front == q->rear == NULL);
}

void enqueue(stackqueue* q, element item) {
	list* p = (list*)malloc(sizeof(list));
	p->data = item;
	p->link = NULL;
	if (is_empty(q)) {
		q->front->link = q;
		q->rear = q;
	}
	else {
		q->rear->link = p;
		q->rear = p;
	}
}

element dequeue(stackqueue* p, element data) {
	list* n = (list*)malloc(sizeof(list));
	if (is_empty(p)) {
		printf(stderr, "스택 비어있음");
		exit(1);
	}
	n = p->front->link;
	element ndata = n->data;
	p->front = p->front->link;
	if (p->front == NULL) {
		p->rear = NULL;
	}
	free(n);
	return ndata;
}