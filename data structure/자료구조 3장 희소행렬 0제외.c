#define ROWS 3
#define COLS 3
#define MAX_TERMS 10
typedef struct
{
    int row, col, value; // 해당 원소가 있는 행, 열, value 저장
} element;
typedef struct SparseMatrix
{
    element data[MAX_TERMS]; // 원소의 위치를 담은 리스트
    int rows;  // 전체 행의 개수
    int cols;  // 전체 열의 개수
    int terms; // 전체 항의 개수
} SparseMatrix;

// SparseMatrix는 리스트 자체, 행, 열, 항의 개수를 저장한다.

// 희소 행렬 덧셈 함수, c = a + b
SparseMatrix sparse_matrix_add2(SparseMatrix a, SparseMatrix b)
{
    SparseMatrix c;             // 리턴할 c 생성
    int ca = 0, cb = 0, cc = 0; // 각 배열의 항목을 가리키는 인덱스
    // 배열 a와 배열 b의 크기가 같은지를 확인

    if (a.rows != b.rows || a.cols != b.cols)
    {                                           // b와 a의 행과 열의 개수가 같아야 더할 수 있음.
        fprintf(stderr, "희소행렬 크기에러\n"); // 틀리면 그냥 에러
        exit(1);
    }

    c.rows = a.rows; // 
    c.cols = a.cols;
    c.terms = 0;

    while (ca < a.terms && cb < b.terms)
    { // 항의 개수가 c의 항의 개수랑 같아지면 나옴
        int inda = a.data[ca].row * a.cols + a.data[ca].col; // a안에 있는 원소의 row number * a자체의 column 개수 + a안에 있는 원소의 column number
        int indb = b.data[cb].row * b.cols + b.data[cb].col; // b안에 있는 원소의 row number * b자체의 column 개수 + b안에 있는 원소의 column number
        // row 위치 넘버에 전체 col곱하면 행렬로 상상했을때 원소가 있는 줄까지 내려옴 거기에 column number 더하면 그 원소 위치로 이동됨.
        if (inda < indb)
        { // a 배열 항목이 앞에 있으면
            c.data[cc++] = a.data[ca++]; // 원소 자체가 들어갈 수 있음 위치랑 value다
        }
        else if (inda == indb)
        { // a와 b가 같은 위치
            c.data[cc].row = a.data[ca].row; //a 원소 위치랑 맞춤 b로 해도 됨.
            c.data[cc].col = a.data[ca].col;
            c.data[cc++].value = a.data[ca++].value + b.data[cb++].value; // 둘이 더해서 집어 넣음.
        }
        else // b 배열 항목이 앞에 있음
            c.data[cc++] = b.data[cb++];
    }

    // 배열 a와 b에 남아 있는 항들을 배열 c로 옮긴다.
    for (; ca < a.terms; ca++)
        c.data[cc++] = a.data[ca++];
    for (; cb < b.terms; cb++)
        c.data[cc++] = b.data[cb++];
    c.terms = cc;
    return c;
}

void main()
{
    SparseMatrix m1 = {{{1, 1, 5}, {2, 2, 9}}, 3, 3, 2};
    SparseMatrix m2 = {{{0, 0, 5}, {2, 2, 9}}, 3, 3, 2};
    SparseMatrix m3;
    m3 = sparse_matrix_add2(m1, m2);
}

