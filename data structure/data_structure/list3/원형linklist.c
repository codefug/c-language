#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct {
	struct 원형* link;
	element data;
}원형;

원형* insert_first(원형* head, element d) {
	// 새로운 노드 -> link = head->link
	// head->link = 새로운 노드

	원형* p = (원형*)malloc(sizeof(원형));
	p->data = d;
	if (head == NULL) {
		head = p;
		p->link = head;
	}
	else {
		p->link = head->link;
		head->link = p;
	}
	return head;
}

원형* insert_last(원형* head, element d) {
	// 새로운 노드 -> link = head->link
	// head=새로운 노드

	원형* p = (원형*)malloc(sizeof(원형));
	p->data = d;
	if (head == NULL) {
		head = p;
		p->link = head;
	}
	else {
		p->link = head->link; //p와 기존에 head와 이어졌던 애와
		head->link = p; //기존에 head였던 애가 p와 이어지게
		head = p; //head = p;
	}
	return head;
}

void print_list(원형* head)
{
	원형* p;
	if (head == NULL) {
		return;
	}
	p = head->link;
	do {
		printf("%d->", p->data);
		p = p->link;
	} while (p != head);
	printf("%d", p->data);
}

int main(void) {
	원형* head = NULL;

	// list = 10->20->30->40
	head = insert_last(head, 20);
	head = insert_last(head, 30);
	head = insert_last(head, 40);
	head = insert_first(head, 10);
	print_list(head);

	return 0;
}