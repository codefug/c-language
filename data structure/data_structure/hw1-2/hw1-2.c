#include <stdio.h>
#include <stdlib.h>
#define maxn 1000
typedef int element;

typedef struct {
	element* data;
	int capacity;
	int top;
}stack;

void init(stack* s) {
	s->data = (element*)malloc(sizeof(element));
	s->top = -1;
	s->capacity = 1;
}

int is_full(stack* s) {
	return (s->top >= (s->capacity - 1));
}

int is_empty(stack* s) {
	return (s->top == -1);
}

void push(stack* s, element item) {
	if (is_full(s)) {
		s->capacity *= 2;
		s->data = (element*)realloc(s->data, s->capacity * sizeof(element));
	}
	s->data[++(s->top)] = item;
}

element pop(stack* s) {
	if (is_empty(s)) {
		printf("비어있습니다.");
		exit(1);
	}
	else return s->data[(s->top)--];
}
//기본적인 동적 stack 코드

int main(void) {
	stack stack1;
	stack stack2;
	init(&stack1);
	init(&stack2);
	int n;
	srand(time(NULL));
	scanf_s("%d", &n); // 사용자에게 10~100 사이의 숫자를 입력 받음.
	int* arr;
	int* answer;
	arr = (int*)malloc(n * sizeof(int));
	answer = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		arr[i] = (rand() % 1000);
	}
	for (int i = 0; i < n; i++) {
		element a;
		a = arr[i];
		if (is_empty(&stack1))
			push(&stack1, a);
		else {
			while (!is_empty(&stack1)) {
				int n = pop(&stack1);
				if (a >= n) {
					push(&stack2, n);
				}
				else {
					push(&stack1, n);
					break;
				}
			}
			push(&stack1, a);
			while (!is_empty(&stack2)) {
				push(&stack1, pop(&stack2));
			}
		}
	}
	while (!is_empty(&stack1)) {
		push(&stack2, pop(&stack1));
	}
	printf("오름차순 배열 : ");
	int i = 0;
	while (!is_empty(&stack2)) {
		answer[i++] = pop(&stack2);
	}
	for (int i = 0; i < n; i++) {
		printf(" %d ", answer[i]);
		push(&stack2, answer[i]);
	}
	printf("\n내림차순 배열 : ");
	int j = 0;
	while (!is_empty(&stack2)) {
		answer[j++] = pop(&stack2);
	}
	for (int i = 0; i < n; i++) {
		printf(" %d ", answer[i]);
	}
}

	//알고리즘 구조
	//1. 순서에 맞춰 배열에서 원소 하나를 꺼냅니다.
	//2. stack1을 탐색하고 비어있으면 그냥 넣고 아니면
	// 자신보다 작은 값이 나올때까지 push(stack2,pop(stack1))해서
	// stack2에 담고 있다가 stack1이 비거나 자신보다 작은 값이 나오면 더이상 pop하지 않고
	// stack1에 원소를 넣고 stack2에 놓은걸 전부 stack1으로 돌립니다.
	//3. 모든 원소를 돌면 stack1에는 0부터 시작해서 작은값으로 정렬된다.
	//4. 오름차순 정렬을 위해서 stack2에 모든 원소를 push(stack2,pop(stack1)해주고
	//5. 그대로 배열에 넣어준다. (오름차순 정렬)
	//6. 스택에 배열에 값을 순서대로 담은 후 그대로 pop해준다 (내림차순 정렬)