#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 100
// 파일 열어서 한줄 씩 입력 받아서 인접행렬로 네트워크를 받는다.
// 친밀도로 크루스칼을 돌리는데 정렬은 힙으로 한다.
// MST을 만드는 동안 조상에 대해서 famility를 저장하고 있다가 그룹이 5개가 되면 break
// parent를 이용해서 각 그룹의 시작점을 찾고 그룹별로 answer에 넣고 출력

double answer[5]; // 각 그룹 배열
int checknum = 100; // 그룹 개수 확인하는 변수
double famility_root[100]; // 여기에 famility 저장할꺼임

typedef struct {
    int start, end;
    double famility;
} edge;

typedef struct {
    int n;
    edge edges[10000];
}GraphType;

//크루스칼 부품
int parent[100];

void set_init(int n) {
    for (int i = 0; i < n; i++)
        parent[i] = -1;
}

int set_find(int curr)
{
    if (parent[curr] == -1)
        return curr;
    while (parent[curr] != -1) curr = parent[curr];
    return curr;
}
void set_union(int a, int b,double famility)
{
    int root1 = set_find(a);
    int root2 = set_find(b);
    if (root1 != root2){
        parent[root1] = root2;
        famility_root[root2] = famility_root[root1] + famility + famility_root[root2]; // root1의 조상, root2의 조상의 famility를 합치고
        //a와 b를 이었기 때문에 a와 b의 사이에 있는 famility도 이 그룹에 들어가야하는 실수임. 더해줌.
        --checknum; // 두 그룹이 하나가 되었기에 그룹 하나를 빼준다.
}
}

// 크루스칼 부품 끝

// 힙 정렬 부품 (heapType는 GraphType으로 하고 heap_size=n으로 했음, 두번 입력받기 싫어서)
GraphType* create()
{
    return (GraphType*)malloc(sizeof(GraphType));
}
// 초기화 함수
void init(GraphType* h)
{
    h->n = 0;
}

// 삽입 함수
void insert_max_edges(GraphType* h, edge item)
{
    int i;
    i = ++(h->n);

    //  트리를 거슬러 올라가면서 부모 노드와 비교하는 과정
    while ((i != 1) && (item.famility > h->edges[i / 2].famility)) {
        h->edges[i] = h->edges[i / 2];
        i /= 2;
    }
    h->edges[i] = item;     // 새로운 노드를 삽입
}

// 삭제 함수
edge delete_max_edges(GraphType* h)
{
    int parent, child;
    edge item, temp;

    item = h->edges[1];
    temp = h->edges[(h->n)--];
    parent = 1;
    child = 2;
    while (child <= h->n) {
        // 현재 노드의 자식노드 중 더 작은 자식노드를 찾는다.
        if ((child < h->n) &&
            (h->edges[child].famility) < h->edges[child + 1].famility)
            child++;
        if (temp.famility >= h->edges[child].famility) break;
        // 한 단계 아래로 이동
        h->edges[parent] = h->edges[child];
        parent = child;
        child *= 2;
    }
    h->edges[parent] = temp;
    return item;
}

// 기존 코드에서 element는 edge로 바꿨고 HeapType은 GraphType으로 변수 이름들만 바뀐 코드임
void heap_sort(edge a[], int n)
{
    int i;
    GraphType* h;

    h = create();
    init(h);
    for (i = 0; i < n; i++) {
        insert_max_edges(h, a[i]);
    }
    for (i = (n - 1); i >= 0; i--) {
        a[i] = delete_max_edges(h);
    }
    free(h);
}

// 힙 정렬 부품 끝
void kruskal(GraphType* g)
{
    int edge_accepted = 0;	// 현재까지 선택된 간선의 수	
    int uset, vset;			// 정점 u와 정점 v의 집합 번호
    edge e;

    for (int i = 0; i < 100; i++) {
        famility_root[i] = 0; // famility_root[i]= i로 시작하는 그룹의 친밀도 총합
    }

    heap_sort(g->edges, g->n);

    int i = 0;
    set_init(100);
    while (edge_accepted < (100))	// 간선의 수 < (n-1) 최대 e번 돌아간다. 스패닝트리 성질
    {
        e = g->edges[i];
        uset = set_find(e.start);		// 정점 u의 그룹 시작점
        vset = set_find(e.end);		// 정점 v의 그룹 시작점
        if (uset != vset) {			// 다른 그룹이면
            edge_accepted++;
            set_union(uset, vset, e.famility);	// 두개의 집합을 합치고 famility를 저장해줌.
            if (checknum == 5) { // 그룹이 5개 형성되면
                int index=0; 
                for (int i = 0; i < 100; i++)
                {
                    if (parent[i] == -1) 
                    {
                        answer[index++] = famility_root[i]; //저장해놓은 famility를 이용해서 answer에 넣어준다.
                        printf("%d로 시작하는 %d번째 그룹의 친밀도 총합 : %f\n",i, index, answer[index-1]);
                    } 
                }
                break;
            }
        }
        i++;
    }
}

void main() {
    FILE* file;
    char line[MAX_LINE_LENGTH];
    GraphType* inputlist=(GraphType*)malloc(sizeof(GraphType));
    if (inputlist == NULL) {
        stderr;
        exit;
    }
    int numLines = 0;
    double input[100][100];

    // 파일 열기
    file = fopen("students2.txt", "r");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 파일 포인터를 다시 파일의 처음으로 이동
    fseek(file, 0, SEEK_SET);
    // 언급이 없는 간선은 11이므로 그 값으로 초기화 시켜줌.
    for (int k = 0; k < 100; k++) {
        for (int n = 0; n < 100; n++)
        {
            input[k][n] = 11;
        }
    }
    // 간선 input에 넣어줌
    int a, b, c;
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        sscanf(line, "%d %d %d", &a, &b, &c);
        input[a][b] = c;
    }

    // 둘다 11이면 간선 없는거니깐 제외하고 나머지 그래프에 넣어줌 (그래프 초기화)
    // 시작값이 끝값보다 무조건 작도록 (중복 방지) 해준다.
    int i = 0;
    for (int k = 0; k < 100; k++) {
        for (int n = k+1; n < 100; n++) {
            if (!(input[k][n] == 11.0 && input[n][k] == 11.0)){ // 연결 안되있는거 제외
                numLines++;
                inputlist->edges[i].start = k;
                inputlist->edges[i].end = n;
                inputlist->edges[i++].famility = (input[k][n] + input[n][k]) / 2;
            }
        }
    }

    inputlist->n = numLines; //간선의 수
    // 파일 닫기
    fclose(file);
    // 여기까지 파일을 읽고, inputlist라는 그래프 안에 edges가 있는데 이 edges안에 a,b,친밀도를
    // start,end,famility순서로 넣었고 inputlist는 간선의 개수, edge들의 배열을 갖고 있음.

    // 크루스칼 알고리즘 시작
    // union-find할 때 그룹 5개 되면 종료하고 answer배열에 저장하면서 출력,answer배열은 이뻐보일려고 만듬.
    kruskal(inputlist);
    // 동적 할당한 메모리 해제
    free(inputlist);

    return 0;
}