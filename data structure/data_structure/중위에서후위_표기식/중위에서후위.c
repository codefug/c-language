#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;
typedef struct {
	element* data;
	int capacity;
	int top;
}stack;

void init_stack(stack* s) {
	s->data = (element*)malloc(sizeof(element));
	s->capacity = 1;
	s->top = -1;
}

int is_full(stack* s) {
	return (s->top == s->capacity - 1);
}

int is_empty(stack* s) {
	return (s->top == -1);
}

char pop(stack* s) {
	if (is_empty(s)) {
		exit(1);
	}
	else return s->data[(s->top)--];
}

int peek(stack* s) {
	if (is_empty(s)) {
		exit(1);
	}
	else return s->data[(s->top)];
}

void push(stack* s, element item) {
	if (is_full(s)) {
		s->capacity *= 2;
		s->data = (element*)realloc(s->data,s->capacity * sizeof(element));
	}
	s->data[++(s->top)] = item;
}

int prec(char op)
{
	switch (op) {
	case '(': case ')': return 0;
	case '+': case '-': return 1;
	case '*': case '/': return 2;
	}
	return -1;
}

void sol(char p[]) {
	char ch, t,result="";
	int i;
	stack s;
	init_stack(&s);
	for (i = 0; i < strlen(p); i++) {
		ch = p[i];
		switch (ch) {
		case '+':case'*':case'/':case'-':
			while (!is_empty(&s) && prec(ch) <= prec(peek(&s))) {
				printf("%c", pop(&s));
			}
			push(&s, ch);
			break;
		case '(':
			push(&s, ch);
			break;
		case ')':
			t = pop(&s);
			while (t == '(') {
				printf("%c", t);
				t = pop(&s);
			}
			break;
		default:
			printf("%c", ch);
			break;
		}
	}
	while (!is_empty(&s)) {
		printf("%c", pop(&s));
	}
	return;
}

int main(void) {
	char p[] = "3+3+2*5+(1+3)"; 
	sol(p);
	return 0;
}