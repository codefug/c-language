#include<stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MAX_DEGREE 101
typedef struct { 			// 다항식 구조체 타입 선언
	int degree;			// 다항식의 차수
	float coef[MAX_DEGREE];	// 다항식의 계수
} polynomial;

polynomial poly_add1(polynomial A, polynomial B) {	
	polynomial C;			// C = A+B 여기서 A와 B는 다항식이다.
	int Apos=0, Bpos=0, Cpos=0;		// 계수 위치를 반환 (a,b로 치면 
	int degree_a=A.degree;         //이것도 차수인데 0이 제일 큼)
	int degree_b=B.degree; // 각 다항식의 현재 차수를 구하는 변수
	C.degree = MAX(A.degree, B.degree);		// 결과 다항식 차수
	while( Apos<=A.degree && Bpos<=B.degree ) { // 대문자임 보면
		if( degree_a > degree_b ) {  //최대 차수 보는거임
		 C.coef[Cpos++]= A.coef[Apos++];
		 degree_a--;
		} else if( degree_a == degree_b ){		// A항 == B항
		     C.coef[Cpos++]=A.coef[Apos++]+B.coef[Bpos++];
		     degree_a--; degree_b--;
		} else {				// B항 > A항
		     C.coef[Cpos++]= B.coef[Bpos++];
		     degree_b--;
		}
	}
	return C;
}

void main() {
	polynomial a = { 5, {3, 6, 0, 0, 0, 10} };
	polynomial b = { 4, {7, 0, 5, 0, 1} };
	polynomial c;
	c = poly_add1(a,b);
}