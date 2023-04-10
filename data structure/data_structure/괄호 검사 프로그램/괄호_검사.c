#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct {
	element *data;
	int capacity;
	int top;
} stack;

void init_stack(stack *s) {
	s->data = (element*)malloc(sizeof(element));
	s->capacity = 1;
	s->top = -1;
}

int is_empty(stack* s) {
	return (s->top == -1);
}

int is_full(stack* s) {
	return (s->top == 99);
}

void push(stack* s, element item) {

	if (is_full(s)) {
		s->capacity *= 2;
		s->data = (element*)realloc(s->data,s->capacity*sizeof(element));
	}
	s->data[++(s->top)] = item;
}
char pop(stack* s) {
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

void delete(stack* s) {
	free(s);
}

int check(char p[]) {
	stack s,num;
	int number = 0;
	init_stack(&s);
	init_stack(&num);
	char ch,open_ch;
	int i,n=strlen(p);
	for (i = 0; i < n; i++) {
		ch = p[i];
		switch (ch) {
		case '(':   case '[':    case '{':
			push(&s, ch);
			push(&num, ++number);
			printf("%d",number);
			break;
		case ')':   case ']':    case '}':
			if (is_empty(&s))  return 0;
			else {
				open_ch=pop(&s);
				if ((open_ch == '(' && ch != ')') ||
					(open_ch == '[' && ch != ']') ||
					(open_ch == '{' && ch != '}')) {
					return 0;
				}
				printf("%d",pop(&num));
				break;
			}
		}
	}
	if (!is_empty(&s)) return 0; // 스택에 남아있으면 오류
	return 1;
}

int main(void) {
	char p[] = "((((()";
	if (check(p) == 1)
		printf("%s 성공\n", p);
	else
		printf("%s 실패", p);
	return 0;
}