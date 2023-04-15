#include <stdio.h>
#include <stdlib.h>

#define maxn 5
typedef int element;
typedef struct {
	element data[maxn];
	int front, rear;
}deque;

void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init_deque(deque* q)
{
	q->front = q->rear = 0;
}

int is_empty(deque* q)
{
	return (q->front == q->rear);
}

int is_full(deque* q)
{
	return (q->front == (q->rear + 1) % maxn);
}

void deque_print(deque* q)
{
	printf("front = %d rear = %d", q->front, q->rear);
	if (!is_empty(q)) {
		int i = q->front;
		do {
			i = (i + 1) % maxn;
			printf("%d | ", q->data[i]);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}

void add_rear(deque* q, element item)
{
	if (is_full(q))
		error("큐가 포화상태입니다.");
	q->rear = (q->rear + 1) % maxn;
	q->data[q->rear] = item;
}

void add_front(deque* q, element item)
{
	if (is_full(q))
		error("큐가 포화상태입니다.");
	q->data[q->front] = item;
	q->front = (q->front -1 + maxn) % maxn;
}

element get_front(deque* q) {
	if (is_empty(q))
		error("큐가 공백상태입니다.");
	return q->data[(q->front + 1) % maxn];
}

element get_rear(deque* q) {
	if (is_empty(q))
		error("큐가 공백상태입니다.");
	return q->data[q->rear];
}

element delete_front(deque* q) {
	if (is_empty(q))
		error("큐가 공백상태입니다.");
	q->front = (q->front +1) % maxn;
	return q->data[q->front];
}

element delete_rear(deque* q) {
	int prev = q->rear;
	if (is_empty(q))
		error("큐가 공백상태입니다.");
	q->rear = (q->rear - 1 + maxn) % maxn;
	return q->data[prev];
}

int main(void)
{
	deque q;
	init_deque(&q);
	for (int i = 0; i < 3; i++) {
		add_front(&q, i);
		deque_print(&q);
	}
	for (int i = 0; i < 3; i++) {
		delete_rear(&q);
		deque_print(&q);
	}
	return 0;
}