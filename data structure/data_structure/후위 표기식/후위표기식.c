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
	s->top = -1;
	s->capacity = 1;
}

int is_full(stack* s) {
	return (s->top >= (s->capacity-1));
}

int is_empty(stack* s) {
	return (s->top == -1);
}

void push(stack* s, element item) {
	if (is_full(s)) {
		s->capacity *= 2;
		s->data= (element*)realloc(s->data, s->capacity * sizeof(element));
	}
	s->data[++(s->top)] = item;
}

element pop(stack* s) {
	if (is_empty(s)) {
		printf("비 상");
		exit(1);
	}
	else return s->data[(s->top)--];
}

int eval(char exp[])
{
	int op1, op2, value, i = 0;
	int len = strlen(exp);
	char ch;
	stack s;
	init(&s);
	for (i = 0; i < len; i++) {
		ch = exp[i];
		if (ch != '+' && ch != '-' && ch != '*' && ch != '/') {
			value = ch - '0';	// 입력이 피연산자이면
			push(&s, value);
		}
		else {	//연산자이면 피연산자를 스택에서 제거
			op2 = pop(&s);
			op1 = pop(&s);
			switch (ch) { //연산을 수행하고 스택에 저장 
			case '+': push(&s, op1 + op2); break;
			case '-': push(&s, op1 - op2); break;
			case '*': push(&s, op1 * op2); break;
			case '/': push(&s, op1 / op2); break;
			}
		}
	}
	return pop(&s);
}

int main(void)
{
	int result;
	printf("후위표기식은 82/3-32*+\n");
	result = eval("82/3-32*+");
	printf("결과값은 %d\n", result);
	return 0;
}