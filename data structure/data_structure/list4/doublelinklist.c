#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct dlist{
	struct dlist* rlink;
	struct dlist* llink;
	element data;
}dlist;

void init(dlist* head)
{
	head->llink = head;
	head->rlink = head;
}

void dinsert(dlist* pre, element data)
{
	dlist* p = (dlist*)malloc(sizeof(dlist));
	p->data = data;
	p->llink = pre;
	p->rlink = pre->rlink;
	pre->rlink->llink = p;
	pre->rlink = p;
	//새로 들어오는 node부터 건들여야 편함
	// 새로운 node왼쪽 오른족
	// 기존 노드 오른쪽의 왼쪽 node박고 노드 오른쪽 변경
}

void ddelete(dlist* head, dlist* remove) {
	if (head == remove) return;
	remove->llink->rlink = remove->rlink;
	remove->rlink->llink = remove->llink;
	free(remove);
}

void print_dlist(dlist* head)
{
	dlist* p;
	for (p = head->rlink; p != head; p = p->rlink) {
		printf("<- |%d| ->", p->data);
	}
	printf("\n");
}
int main(void)
{
	dlist* head = (dlist*)malloc(sizeof(dlist));
	init(head);
	printf("추가 단계\n");
	for (int i = 0; i < 5; i++) {
		// 헤드 노드의 오른쪽에 삽입
		dinsert(head, i);
		print_dlist(head);
	}
	printf("\n삭제 단계\n");
	for (int i = 0; i < 5; i++) {
		print_dlist(head);
		ddelete(head, head->rlink); // head->rlink 가 removed로 쓰임
	}
	free(head);
	return 0;
}
