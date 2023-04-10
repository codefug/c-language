#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct {
	element* data;
	int capacity;
	int top;
}stack;

void init(stack* s) {
	s->data = (element*)malloc(sizeof(element));
	s->capacity = 1;
	s->top = -1;
};

int is_full(stack* s) {
	return (s->top == 99);
}

int is_empty(stack* s) {
	return (s->top == -1);
}

void push(stack* s,element item) {
	if (is_full(s)) {
		s->capacity *= 2;
		element* temp = (element*)realloc(s->data, s->capacity * sizeof(element));
		if (temp == NULL) {
			printf("메모리 할당 실패\n");
			exit(1);
		}
		s->data = temp;
	}
	s->data[++(s->top)] = item;
}

char pop(stack* s) {
	if (is_empty(s)) {
		printf("오류");
		exit(1);
	}
	else {
		return s->data[s->top--];
	}
}

void check(char p[]) {
	stack s;
	init(&s);
	int i, n = 7, anum = 0, bnum = 0;
	char ch;
	for (i = 0; i < n; i++) {
		ch = p[i];
		switch (ch) {
		case 'a': case 'A':
			push(&s, 'a');
			break;
		case 'b': case 'B':
			push(&s, 'b');
			break;
		}
	}
	for (i = 0; i < n; i++) {
		ch = pop(&s);
		switch (ch) {
		case 'a':
			anum += 1;
			break;
		case 'b':
			bnum += 1;
			break;
		}
	}
	printf("%da%db", anum, bnum);
}

int main(void) {
	char p[7] = "aaaAbBb";
	check(p);
	return 0;
}