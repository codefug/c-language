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
	s->data[++(s->top)] = item;
}

element pop(stack* s) {
	if (is_empty(s)) {
		printf("비어있습니다.");
		exit(1);
	}
	else return s->data[(s->top)--];
}
//기본적인 stack 코드 , n으로 스택을 맞춰야되서 push에 realloc없앴고 init은 main함수 상에서 구현하여 입력받은 n만큼 메모리를 할당하게 했다.

//알고리즘 구조
//1.순서에 맞춰 배열에서 원소 하나를 꺼냅니다.
// 
//2.stack1을 탐색하고 비어있으면 그냥 넣고 아니면 자신보다 작거나 같은 값이 나올때까지 push(stack2,pop(stack1))해서
// stack2에 담고 있다가 stack1이 비거나 자신보다 작은 값이 나오면 더이상 pop하지 않고 stack1에 원소를 넣고 stack2에 놓은걸 전부 stack1으로 돌립니다.
//3.모든 원소를 돌면 stack1에는 0부터 시작해서 작은값으로 정렬된다.
//4.오름차순 정렬을 위해서 stack2에 모든 원소를 push(stack2,pop(stack1)해주고
//5.그대로 배열에 넣어준다. (오름차순 정렬)
//6. 위와 같이 진행한 후에 다른 스택으로 옮겨 담지 않고 그대로 answer에 넣어주면 내림차순 정렬이 된다.

int main(void) {
	stack stack1;
	stack stack2;
	int n;
	srand(time(NULL));
	do {
		scanf_s("%d", &n); // 사용자에게 10~100 사이의 숫자를 입력 받음.
	} while (10 > n || n > 100);
	stack1.data = (element*)malloc(n*sizeof(element)); // 스택 사이즈 n
	stack1.top = -1;
	stack1.capacity = 1;

	stack2.data = (element*)malloc(n*sizeof(element));
	stack2.top = -1;
	stack2.capacity = 1;
	
	int* arr;
	int* answer;
	arr = (int*)malloc(n * sizeof(int)); //난수 배열
	answer = (int*)malloc(n * sizeof(int)); //정답 배열

	for (int i = 0; i < n; i++) {
		arr[i] = (rand() % 1000); //0~ 999사이의 난수로 이루어진 리스트 생성
	}
	for (int i = 0; i < n; i++) {
		element a;
		a = arr[i];
		if (is_empty(&stack1))
			push(&stack1, a);
		else {
			while (!is_empty(&stack1)) {
				int n = pop(&stack1);
				if (a < n) {
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
	}

	printf("\n내림차순 배열 : ");
	for (int i = 0; i < n; i++) {
		element a = arr[i];
		if (is_empty(&stack1))
			push(&stack1, a);
		else {
			while (!is_empty(&stack1)) {
				int n = pop(&stack1);
				if (a < n) { //a가 n보다 작으면 n을 stack2에 담음
					push(&stack2, n);
				}
				else { //크거나 같으면 stack1에 넣고 while 나옴
					push(&stack1, n);
					break;
				}
			}
			push(&stack1, a); // stack1에는 a보다 작은 애들만 있음 그대로 a를 넣고 stack2에 꺼내놨던거 stack1에 채움.
			while (!is_empty(&stack2)) {
				push(&stack1, pop(&stack2));
			}
		}
	}
	int j = 0;
	while (!is_empty(&stack1)) {
		answer[j++] = pop(&stack1);
	}
	for (int i = 0; i < n; i++) {
		printf(" %d ", answer[i]);
	}
}