#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int element;

typedef struct {
	struct Linklist* link;
	element data;
}Linklist;

Linklist* delete(Linklist* head, Linklist* pre) {
	Linklist* removed = pre->link;
	pre->link = removed->link;
	free(removed);
	return head;
}

void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

Linklist* insert_last(Linklist* head,element data) {
	Linklist* p = (Linklist*)malloc(sizeof(Linklist));
	p->data = data;
	p->link = NULL;
	if (head == NULL) {
		head = p;
		return head;
	}
	else {
		Linklist* tmp;
		tmp = head;
		while (head->link != NULL) {
			head = head->link;
		}
		head->link = p;
		return tmp;
	}
}

void print(Linklist*head) {
	Linklist* p = head;
	for (; p->link!= NULL; p = p->link) {
		printf("%d -> ", p->data);
	};
	printf("%d", p->data);
	printf("\n");
	return;
}
int main(void) {
	Linklist* head=NULL;
	srand(time(NULL));
	for (int i=0;i<100;i++){
		int tmp = (rand() % 100);
		head = insert_last(head, tmp);
	}
	Linklist* p = head;
	while (p != NULL) {
		element d = p->data;
		for (Linklist* tmp = p; tmp!= NULL; tmp = tmp->link) {
			Linklist* q = tmp->link;
			if (q == NULL)
				break;
			if (q->data == d) {
				delete(head, tmp);
			}
		}
		p = p->link;
		}
	print(head);
	return 0;
}