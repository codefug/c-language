#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* prev;
	struct node* next;
	int value;
};

struct node* init;

void insert(int v);
void _remove(int v);
void print();

int main(void)
{
	insert(10); insert(20); insert(15); insert(17); insert(5); insert(25); insert(3); insert(27); insert(23);
	_remove(15); _remove(25);  _remove(23);  _remove(3); _remove(27); _remove(17); _remove(10); _remove(20); _remove(5);

	return 0;
}

void insert(int v)	//Every inserted node should be sorted in ascending order of value.
{
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->value = v;
	ptr->next = NULL;
	ptr->prev = NULL;

	if (init == NULL) {
		init = ptr;
	}
	else {
		struct node* current = init;
		while (1) {
			if (current->value > ptr->value) {
				ptr->prev = current->prev;
				ptr->next = current;
				if (current->prev != NULL) {
					current->prev->next = ptr;
					current->prev = ptr;
					break;
				}
				else {
					current->prev = ptr;
					init = ptr;
					break;
				}
			}
			if (current->next == NULL) {
				current->next = ptr;
				ptr->prev = current;
				break;
			}
			current = current->next;
		}
	}
	print();
}

void _remove(int v) //The node whose value is 'v' will be removed
{
	struct node* current = init;
	while (current->value!=v) {
		current = current->next;
	}
	if (current == init)
		init = current->next;
	if (current->next != NULL) {
		if (current->prev != NULL) {
			current->prev->next = current->next;
			current->next->prev = current->prev;
		}
		else {
			current->next->prev = NULL;
			init = current->next;
		}
	}
	else {
		if (current->prev != NULL)
		current->prev->next = NULL;
	}
	free(current);
	//You should call the function "free()" to prevent the memory leak.
	print();
}

void print()
{
	if (init == NULL)
		printf("The stack just emptied");
	else {
		struct node* current = init;
		while (current->next != NULL) {
			printf("%d ", current->value);
			current = current->next;
		}
		printf("%d\n", current->value);
	}
}
