#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct{
element data;
struct Linklist* link;
}Linklist;

void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

Linklist* insert_first(Linklist* head, int value) 
{
	Linklist* p = (Linklist*)malloc(sizeof(Linklist));
	p->data = value;

	p->link = head;
	head = p;
	return head;
} // head값을 반환함.

Linklist* insert(Linklist* head, Linklist* pre, int value) 
{
	Linklist* p = (Linklist*)malloc(sizeof(Linklist));
	p->data = value;
	p->link = pre->link;
	pre->link = p;
	return head;
}

Linklist* delete_first(Linklist* head) 
{
	Linklist* removed;
	if (head == NULL) return NULL;
	removed = head;
	head= removed->link;
	free(removed);
	return head;
}

Linklist * delete(Linklist *head,Linklist * pre)
{
	Linklist* removed;
	removed = pre->link;
	pre->link = removed->link;
	free(removed);
	return head;
}

void print_list(Linklist* head)
{
	for (Linklist* p = head; p != NULL; p = p->link)
		printf("%d->", p->data);
	printf("NULL\n");
}

int main(void)
{
	Linklist* head = NULL;

	for (int i = 0; i < 5; i++) {
		head = insert_first(head, i);
		print_list(head);
	}
	for (int i = 0; i < 5; i++) {
		head = delete_first(head);
		print_list(head);
	}

	return 0;
}