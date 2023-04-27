#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int element;

typedef struct { //연결리스트 생성
	struct Linklist* link;
	element data;
}Linklist;

Linklist* delete(Linklist* head, Linklist* pre) { //pre가 가르키는 노드가 사라짐
	Linklist* removed = pre->link;
	pre->link = removed->link;
	free(removed);
	return head;
}

void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

Linklist* insert_last(Linklist* head,element data) { //리스트의 마지막에 노드를 넣음.
	Linklist* p = (Linklist*)malloc(sizeof(Linklist));
	p->data = data;
	p->link = NULL;
	if (head == NULL) { //비어있으면 head가 p를 가르킴.
		head = p;
		return head;
	}
	else {
		Linklist* tmp;
		tmp = head;
		while (head->link != NULL) { // 끝 노드를 찾아서 p랑 이음
			head = head->link;
		}
		head->link = p;
		return tmp;
	}
}

void print(Linklist*head) { //print하는데 마지막 원소에는 ->가 출력 안되게 print
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
	} //리스트의 마지막에 원소를 추가함
	Linklist* p = head;
	while (p != NULL) { //head부터 끝노드까지 돌리는데 중간중간 중복된 수가 빠지기 때문에 p=p->link가 NULL이 되면 나오게 됨.
		element d = p->data;
		for (Linklist* tmp = p; tmp!= NULL; tmp = tmp->link) {
			Linklist* q = tmp->link; //delete는 pre가 가르킨 노드를 없애기 때문에 없앨 노드의 전 노드가 필요함. ( 전 노드: tmp, 없앨노드: q)
			if (q == NULL) //끝값까지 다 탐색한 경우 break;
				break;
			if (q->data == d) {
				delete(head, tmp);
			}
		}
		p = p->link; //다음 노드로 이동
		}
	print(head); //출력
	return 0;
}