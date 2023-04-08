#define MAX_TERMS 101
struct {
	float coef;
	int expon;
} terms[MAX_TERMS]={ {8,3}, {7,1}, {1,0}, {10,3}, {3,2},{1,0} };
int avail=6;

// 두개의 정수를 비교
char compare(int a, int b) {
	if( a>b ) return '>';
	else if( a==b ) return '=';
	else return '<';
}

// 새로운 항을 다항식에 추가한다.
void attach(float coef, int expon) {
	if( avail>MAX_TERMS ){
		fprintf(stderr, "항의 개수가 너무 많음\n");
		exit(1);
	}
	terms[avail].coef=coef;
	terms[avail++].expon=expon;
}

poly_add2(int As, int Ae, int Bs, int Be, int *Cs, int *Ce) {	// C = A + B
	float tempcoef;
	*Cs = avail; //그냥 있는거임
	while( As <= Ae && Bs <= Be ) // a의 한계점 , b의 한계점 둘중 하나라도 넘으면 while 해제
	 switch(compare(terms[As].expon,terms[Bs].expon)){ 
	 case '>': 	// A의 차수 > B의 차수
		attach(terms[As].coef, terms[As].expon); // attach ( 계수 , 차수)
		As++; break; // a계수 인덱스증가시켜줌
	 case '=': 	// A의 차수 == B의 차수
		tempcoef = terms[As].coef + terms[Bs].coef;
		if( tempcoef ) attach(tempcoef,terms[As].expon);
		As++; Bs++; break;
	 case '<': 	// A의 차수 < B의 차수
		attach(terms[Bs].coef, terms[Bs].expon);
		Bs++; break;
	}
	// A의 나머지 항들을 이동함
	for(;As<=Ae;As++) attach(terms[As].coef, terms[As].expon);
	// B의 나머지 항들을 이동함
	for(;Bs<=Be;Bs++) attach(terms[Bs].coef, terms[Bs].expon);
	*Ce = avail -1; // 그냥 있는거임
}

void main() {
	int Cs, Ce;
	poly_add2(0,2,3,5,&Cs,&Ce);
}
