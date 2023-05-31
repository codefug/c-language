#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LENGTH 100
// 파일 열어서 한줄 씩 입력 받아서 인접행렬로 네트워크를 받는다.
// 친밀도로 크루스칼을 돌리는데 정렬은 힙으로 한다.
// union-find 중에 parent리스트를 탐색해서 -1이 5개(조상노드가 5개, 즉 그룹이 5개)
// 이면 종료하고 정점 방문 여부 확인하는 visited 생성, 
// 5개의 MST의 합을 입력받는 answer[5] 생성
// parent를 돌려서 -1인 정점을 group1,2,3,4,5 에 각각 넣는다.
// parent를 다시 돌려서 -1까지 나오게 하고 지나가는 경로를 다 visited 처리 해주고
// visited되지 않은 정점을 찍었을 경우 sum에 저장했다가 -1나왔을 때 group몇인지 봐서
// 그 answer[group i] 에다가 집어넣는다.

int answer[5];
int group_check = 100;
double path_famility[100];

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
void set_union(int a, int b, double* famility)
{
    int root1 = set_find(a);
    int root2 = set_find(b);
    if (root1 != root2) {
        parent[root1] = root2;
        group_check -= 1;
        famility[root2] += famility[root1];
    }
}

// 크루스칼 부품 끝

// 힙 정렬 부품 (heapType > GraphType으로 하고 heap_size=n으로 했음, 두번 입력받기 싫어서)
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

//
void kruskal(GraphType* g)
{
    int edge_accepted = 0;	// 현재까지 선택된 간선의 수	
    int uset, vset;			// 정점 u와 정점 v의 집합 번호
    edge e;

    for (int i = 0; i < 100; i++) {
        path_famility[i] = 0;
    }
    heap_sort(g->edges, g->n);

    int i = 0;
    while (edge_accepted < (g->n - 1))	// 간선의 수 < (n-1) 최대 e번 돌아간다.
    {
        e = g->edges[i];
        uset = set_find(e.start);		// 정점 u의 집합 번호 
        vset = set_find(e.end);		// 정점 v의 집합 번호
        if (uset != vset) {			// 서로 속한 집합이 다르면
            edge_accepted++;
            set_union(uset, vset,path_famility);	// 두개의 집합을 합친다.
        }
        int index = 0;
        if (group_check == 5) {
            for (int start = 0; start < 100; start++) {
                if (parent[start] == -1)
                    answer[index++] = path_famility[start];
            }
        }
        i++;
    }
}

void main() {
    FILE* file;
    char line[MAX_LINE_LENGTH];
    GraphType* inputlist;
    int numLines = 0;
    double input[100][100];

    // 파일 열기
    file = fopen("students2.txt", "r");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 파일에서 줄 수 세기
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        numLines++;
    }

    // 파일 포인터를 다시 파일의 처음으로 이동
    fseek(file, 0, SEEK_SET);

    inputlist->n = numLines;// 간선의 수 갱신

    // 파일에서 edge 읽어와서 구조체에 저장
    for (int k = 0; k < 100; k++) {
        for (int n = 0; n < 100; n++)
        {
            input[k][n] = 11;
        }
    }
    int a, b, c;
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        sscanf(line, "%d %d %d", &a, &b, &c);
        input[a][b] = c;
    }
    int i = 0;
    for (int k = 0; k < 100; k++) {
        for (int n = k; n < 100; n++) {
            inputlist->edges[i].start = k;
            inputlist->edges[i].end = n;
            inputlist->edges[i++].famility = (input[k][n] + input[n][k]) / 2;
        }
        // 파일 닫기
        fclose(file);
        // 여기까지 파일을 읽고, inputlist라는 그래프 안에 edges가 있는데 이 edges안에 a,b,친밀도를
        // start,end,famility순서로 넣었고 inputlist는 간선의 개수, edge들의 배열을 갖고 있음.

        // 크루스칼 알고리즘 시작
        // 이제 친밀도 기준으로 힙정렬
        heap_sort(inputlist, numLines);
        // union-find할 때 그룹 5개 되면 종료하고 answer에 넣음
        kruskal(inputlist);
        // answer 출력
        for (int number = 0; number < 5; number++)
            printf("%f ", answer[number]);
        // 동적 할당한 메모리 해제
        free(inputlist);

        return 0;
    }
}