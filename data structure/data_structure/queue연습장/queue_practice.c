#include <stdio.h>
#include <stdlib.h>
#define maxnumber 5

typedef int element;

typedef struct {
	int	front;
	int rear;
	element data[maxnumber];
} queue;

void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init_queue(queue* q) {
	q->front = -1;
	q->rear = -1;
}

void queue_print(queue* q) {
	for (int i = 0; i < maxnumber; i++) {
		if (i <= q->front || i > q->rear)
			printf(" |");
		else
			printf("%d |", q->data[i]);
	}
	printf("\n");
}

int is_full(queue* q) {
	if (q->rear == maxnumber-1)
		return 1;
	else
		return 0;
}

int is_empty(queue* q) {
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}

void enqueue(queue* q, int item) {
	if (is_full(q)) {
		error("큐가 포화상태입니다.");
		return;
	}
	q->data[++(q->rear)] = item;
}

int dequeue(queue* q) {
	if (is_empty(q)) {
		error("큐가 공백상태입니다.");
		return -1;
	}
	int item = q->data[++(q->front)];
	return item;
}

int main(void) {
	int item = 0;
	queue q;

	init_queue(&q);

	enqueue(&q, 10); queue_print(&q);
	enqueue(&q, 20); queue_print(&q);
	enqueue(&q, 30); queue_print(&q);

	item = dequeue(&q); queue_print(&q);
	item = dequeue(&q); queue_print(&q);
	item = dequeue(&q); queue_print(&q);
	return 0;
}