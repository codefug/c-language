#include <stdio.h>
#include <stdlib.h>

//빅오란 모든 n>=n_0에 대하여 |f(n)|<=c|g(n)|을 만족하는
//2개의 상수 c와 n_0가 존재하면 f(n)=O(g(n))이다.

// 2장
//int factorial(int n) {
//	if (n <= 1) return 1;
//	else return (n * factorial(n - 1));
//}

//int factorial(int n) {
//	int answer=1;
//	for (int k = 1; k <= n; k++) {
//		answer *= k;
//	}
//	return answer;
//}

//double slow_power(double x, int n)
//{
//	int i;
//	double r = 1.0;
//	for (i = 0; i < n; i++)
//		r = r * x;
//	return r;
//}
//
//double power(double x, int n)
//{
//	if (n = 0)
//		return 1;
//	else if (n % 2 == 0)
//		return power(x * x, (n / 2));
//	else
//		return x * power(x * x, ((n - 1) / 2));
//}

//int fib(int n)
//{
//	if (n == 0) return 0;
//	if (n == 1) return 1;
//	return (fib(n - 1) + fib(n - 2));
//}
//
//int fib_iter(int n) {
//	if (n < 2) return n;
//	else {
//		int tmp, current = 1, last = 0;
//		for (int i = 2; i <= n; i++) {
//			tmp = current;
//			current = last + current;
//			last = tmp;
//		}
//		return current;
//	}
//}
//
//void hanoi_tower(int n, char from, char tmp, char to) {
//	if (n == 1) printf("원판 1을 %c에서 %c로 옮긴다.", from, to);
//	else {
//		hanoi_tower(n - 1, from, to, tmp);
//		printf("원판 %d을 %c에서 %c로 옮긴다.",n, from, to);
//		hanoi_tower(n - 1, tmp, from, to);
//	}
//}
// 3장
//typedef struct {
//	int degree;
//	float coef[6];
//}polynomial;
//
//polynomial a = { 5,{10,0,0,0,6,3} };
//다항식의 두가지 표현
//0까지 다 넣는 방법: degree,배열 구조체에 넣고
// 차수를 표현하기 위해 따로 변수를
// 만들고 인덱스를 따로 만들어서 덧셈할때 차수 비교
// 통해서 계산하고 인덱스를 조건에 맞게 이동

// 0빼고 넣는 방법 : 한 배열로 할꺼면 변수 하나 만들어서
// answer 배열 시작 인덱스 정해주고, coef, expon를 구조체
// 에 넣어서 expon차수 비교해서 계산하고 c에 넣고 answer
// 변수 더하고 이런식임 a의 시작값과 끝값을 알아야함 그래야
//  b로 안넘어가지 b도 마찬가지임.

// 희소행렬
// 2차원 배열 : 0포함해서 다 저장 2차원 배열에
// 구조체에 배열,행,열,항의 개수를 넣고
// 현재 행*열의 전체 수 + 현재 열을 이용해서 각 구조체를 
// 비교

// 4장
// LIFO 후입선출
typedef int element;

typedef struct {
	int top;
	element* data;
}stack;

// full empty 는 top에 따라서 바뀌고
// push는 top을 1 올려서 그안에 저장
// pop은 top을 꺼내고 1 내림
// 동적배열로 만들었다 : realloc 이용해서
// capacity*2만큼 늘려준다. capacity는 가질 수 있는
// 아이템의 수이다. (인덱스 x 그래서 1부터 시작, top은 -1)

// 응용
/*
괄호 검사
여는 괄호를 다 스택에 넣고
닫는 괄호 나올때마다 pop 하나씩
괄호 종류가 일치하지 않거나 괄호가 없을 시 return 0
switch 함수 사용 case '(': '[': '{'

후위표기식 계산
두개 한번에 스택에 넣고 연산자 나올때마다 두개씩 뽑아서
push함 마지막에 남은 값이 답임


중위 > 후위표기식
피연산은 그냥 뺴고 연산은 스택에 넣는데
우선순위 (,):0 +:1 *:2 해서 스택에 자기보다 높은
연산이 있으면 pop하고 해당 연산 넣음
닫는 괄호면 하나 pop하고 (가 될때까지 pop

미로 프로그램
스택에 모든 방향을 하나씩 넣은 다음에
지나온 값은 저장해서 다시 안돌게 함
*/

/*
5장 큐
FIFO : First-In First-Out
선형 큐
배열 이용 :front -1 rear -1 로 시작해서 enqueue 하면 
rear 늘려서 넣고 dequeue 하면 front 땡겨서 빼기 

원형 큐
배열과 front , rear를 저장
선형 큐를 원형으로 바꿈 front rear 0으로 시작해서
rear만 늘려서 item을 넣고 front를 늘려서 삭제,
공백 : front == rear , 포화 : front%M = (rear+1)%M
print: front을 받아서 front+1 % M 을 출력하고
만약 rear가 되면 나온다. 안되면 front까지 돌림

덱
원형큐를 이용하기 때문에 더했을때는 %M하면 되는데
뺐을때 -1로 가버리면 안되기 때문에 -1+M 하고 %M한다.
-1로 안가면 그냥 %M되는거고 -1로 갔을때 최대값-1(끝인덱스)
로 이동된다.
print: 원형큐랑 똑같음

응용
시뮬레이션
시간을 재는데 난수로 사람이 오고
대기시간, 처리시간 변수로 받고,
만약 처리 시간 중에 고객이 오면
큐에 넣고 대기시간 돌리고
*/

/*
6장 리스트
삽입, 삭제, 탐색

배열표현 : 배열로 인덱스 이용해서 만듬 사이즈도 넣음

헤더 노드 : 헤드와 테일, 길이를 갖고 있는 하나의 노드,
다항식 덧셈 같은거 할때 같은 구조체의 묶음을 비교하니깐
그때 필요함, 하고싶은 구조체가 안에 포인터로 들어가 있음
안에 있는 마지막에 삽입한다고 치면 tail->link 를 바꾸고
tail을 바꿔야 함.

단순 연결 리스트
연결된 표현 : data field 와 link dield
head 포인터를 이용해서 배열0을 표현한다.
처음이면 head의 데이터는 첫 데이터, 링크는 NULL이 된다.
print: head부터 돌려서 NULL이 나올때까지 link 이동

응용
역순 last current next 하나씩 만들어서
last = current; current = next; next=next->link;
current->link = last;
한칸씩 이동한다는 것, next가 NULL이면 종료

다항식 덧셈
expon, coef 저장하고 link 저장 구조체에
expon 이 둘이 같으면 coef 더한걸 answer->link에 넣음
NULL이면 끝내고 ㅇㅇ

원형 연결 리스트
head가 마지막 노드를 찍고 있음. 탐색할때 head->link부터 시작
초기값: head=node, node->link=head;

응용
원형큐 제작: 맨앞을 front 맨뒤를 rear라고 생각하고 head를
이용해서 delete, insert

이중 연결 리스트
헤드 노드 : 이중연결 리스트에만 존재하는 개념
처음에는 헤드 노드만 존재, 값이 없고 link만 존재함
헤드 포인터는 헤드 노드를 항상 찍음

응용
연결 리스트로 스택 구현
top을 head로 지정해서 하나 더할때마다
link를 head로 찍고 node를 top으로 찍음
뺄때는 data 저장해놓고 top을 top->link해놓고 free
반환

연결 리스트로 큐 구현
초기는 front=rear=NULL
하나 들어오면 front=rear=node
더 들어오면 rear->link=node; rear=node;
뺄때는 변수에 rear 저장하고, front->link=rear일때까지 돌려서
해당 link=NULL만들고 rear= 해당 노드로 하고 변수 free;
*/

int main(void) {
	int n;
	/*n = 3;
	printf("%d", factorial(n));*/

	//hanoi_tower(4, 'A', 'B', 'C');


	return 0;
}