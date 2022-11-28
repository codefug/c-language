#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* prev;
	struct node* next;
	int value;
};

struct node* init;

void insert(int v);
void pop();
void print();

int main(void)
{
	insert(10); insert(20); insert(15); insert(17); insert(5);
	pop(); pop(); pop(); pop(); pop();	

	return 0;
}

void insert(int v)
{	
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->value = v;
	ptr->next = NULL;
	ptr->prev = NULL;

	if (init == NULL)
	{
		init = ptr;
	}
	else {
		struct node* current = init;
		while (current->next != NULL)
			current = current->next;
		current->next = ptr;
		ptr->prev = current;
	}

	print();
}

void pop()
{	
	if (init->next == NULL) {
		free(init);
		init = NULL;
	}
	else {
		struct node* current = init;
		while (current->next != NULL) {
			current = current->next;
		}
		current->prev->next = NULL;
		free(current);
	}
	print();
}

void print()
{
	if (init == NULL)
		printf("The stack just emptied.");
	else {
		struct node* current = init;
		while (current->next != NULL) {
			printf("%d ", current->value);
			current = current->next;
		}
		printf("%d\n", current->value);
	}	
}
