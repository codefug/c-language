#include <stdio.h>

//void swap(int* x, int* y) {
//
//	int tmp = 0;
//
//	tmp = *x;
//
//	*x = *y;
//
//	*y = tmp;
//
//}
//
//int main(void) {
//	int x = 100, y = 200;
//
//	swap(&x, &y);
//	
//	printf("x %d , y %d", x, y);
//
//	return 0;
//}

//int main(void) {
//
//	int list[] = { 10,20,30,40,50 }, i;
//	float sum = 0;
//
//	printf("[ ");
//
//	for (i = 0; i < 5; i++) {
//		printf("%d ", list[i]);
//		sum += list[i];
//	}
//	printf("]");
//	printf("배열 원소들의 평균 = %f", sum / 5);
//
//}

//int main(void) {
//
//	char* a;
//	int* b;
//	double* c;
//
//	a = 10000;
//	b = 10001;
//	c = 10000;
//
//	a++; b++; c++;
//
//	printf("%d, %d, %d", a, b, c);
//
//	return 0;
//}

//int main(void) {
//
//	int* p, v;
//	int number[3] = {100,200,300};
//
//	p = &number;
//
//	printf("초기값 %d\n", *p);
//
//	v = *p++;
//
//	printf("*p++ = %d\n", v); 
//	printf("*p = %d\n", *p);
//
//	v = (*p)++;
//
//	printf("(*p) ++ = %d\n", v); 
//	printf("*p = %d\n", *p);
//
//	v = *++p;
//	printf("*++p = %d\n", v);
//	printf("*p = %d\n", *p);
//	
//	v = ++ * p; 
//	printf("++*p = %d\n", v);
//	printf("p = %d\n", *p);
//
//	printf("%s", &number);
//
//	return 0;
//}

// 예상 100 , 200 , 쓰레기값 , 쓰레기값

//void increase(int* number) {
//	*number = 99;
//}
//
//int main(void) {
//	int number;
//
//	increase(&number);
//
//	printf("%d", number);
//
//	return 0;
//}

//void myMath(int* num1, int* num2, int* max, int* min, int* average)
//{
//	if (*num1 > *num2) {
//		*min = *num2;
//		*max = *num1;
//	}
//	else {
//		*min = *num1;
//		*max = *num2;
//	}
//	*average = (*min + *max) / 2;
//
//	//num1과 num2 이 각각 가리키는 수 중 
//	//큰수를 max가 가리키는 곳에, 
//	//작은수를 min이 가리키는 곳에, 
//	//평균을 average가 가리키는 곳에 넣으세요.
//}
//
//int main(void)
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	int max;
//	int min;
//	int average;
//
//	myMath(&num1,&num2,&max,&min,&average); //함수를 호출하고 인자를 알맞게 넘겨 보세요.
//
//	printf("max = %d, min = %d, average = %d\n", max, min, average);
//	return 0;
//}

//int main(void)
//{
//	int a[] = { 10, 20, 30, 40, 50 },b;
//
//	b = a;
//	printf("배열의 이름 = %u\n", b);
//	printf("배열의 이름 = %u\n", a);
//
//	printf("첫 번째 원소의 주소 = %u\n",&b );
//	printf("첫 번째 원소의 주소 = %u\n", &a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a[] = { 10, 20, 30, 40, 50 };
//	int* p;
//
//	p = a;
//	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
//	printf("p[0]=%d p[1]=%d p[2]=%d \n\n", p[0], p[1], p[2]);
//	printf("p[0]=%d p[1]=%d p[2]=%d \n\n", *(p), *(p+1), *(p+2));
//	return 0;
//}

//#include <stdio.h>
//void sub(int* ptr)
//{
//
//	printf("%d \n", ptr[10]);
//
//}
//
//int main(void)
//{
//	int large_data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
//
//	sub(large_data);
//
//	return 0;
//
//}

//#include <stdio.h>
//#define SIZE 5
//double get_array_avg(int* x);
//void print_array(int* x);
//
//int main(void)
//{
//	int data[SIZE] = { 20, 10, 30, 50, 40 };
//	double result;
//
//	print_array(data);
//	result = get_array_avg(data);
//	printf("배열 원소들의 평균 = %f\n", result);
//	return 0;
//}
//
//double get_array_avg(int* x) {
//
//	float sum=0;
//	int i;
//
//	for (i = 0; i < SIZE; i++) {
//		sum += x[i];
//	}
//
//	return sum / SIZE;
//
//}
//
//void print_array(int* x) {
//	int i;
//
//	printf("[ ");
//	for (i = 0; i < SIZE; i++) {
//		printf("%d ", x[i]);
//	}
//	printf("]");
//}

//int main(void) {
//	int a[] = { 1,2,3 };
//	int* p;
//	p = a;
//	printf("%d %d %d", *p, *p + 2, *(p + 2));
//	return 0;
//}

//int main(void) {
//	int a[10] = { 1,2,3,4,5,6 };
//	int* p = a;
//	int* q = a + 3;
//
//	printf("%d\n", *(a + 1));
//	printf("%d\n", *(p + 2));
//	printf("%d\n", *(q + 3));
//	return 0;
//}

//#include <stdio.h> //문자열을 입력 받아 그 길이를 출력하는 함수를 완성하세요.
//
//void calStringLength(char* l) {
//	int i = 0,sum=0;
//
//	while (l[i++] != '\0') {
//		sum += 1;
//	}
//	printf("문자열 %s 의 길이는 %d입니다.",l,sum);
//}
//
//int main(void)
//{
//	char str[] = "I am a student at Incheon National University.";
//	int i = 0;
//
//	calStringLength(str);	
//
//	return 0;
//}

//int main(void) {
//
//	int ch;
//	ch = getchar();
//	putchar(ch);
//	ch = getchar();
//	putchar(ch);
//	return 0;
//}

#include <stdio.h>

//int main(void)
//{
//	int ch;		// 정수형에 주의
//	ch = getch(); // 첫 번째 문자를 입력받는다. 
//	putch(ch);
//
//	return 0;
//}

#include <stdio.h> //주어진 문자열을 한 문자씩 정확하게 치면 correct 라고 출력되게 하세요.
								 //틀리면 바로 종료 되게 하세요.

//int main(void)
//{
//	int i=0;
//	char str[] = "Incheon" , ch;
//	printf("%s\n", str);
//
//	while (str[i] != '\0') {
//		printf("\ninput: ");
//		ch = getch();
//		putchar(ch);
//		if (ch != str[i++]){
//			printf("\nwrong!!");
//		exit(1);
//	}
//	}
//
//	printf("\ncorrect!!");
//
//	return 0;
//}

//int main(void) {
//
//	char address[100];
//	gets_s(address, 99);
//	puts(address);
//	gets_s(address, 99);
//	puts(address);
//	gets_s(address, 99);
//	puts(address);
//
//}

//int main(void) {
//	char string1[1000],string2[1000];
//	int i=0;
//
//	printf("insert a sentence: ");
//	gets_s(string1, 99);
//	printf("insert the same: ");
//	gets_s(string2, 99);
//
//	while (string1[i] != '\0') {
//		if (string1[i] == string2[i++]) {
//			continue;
//		}
//		else {
//			printf("Wrong!!");
//			exit(1);
//		}
//		i++;
//	}
//	if (string1[i] == string2[i] && string2[i] == '\0') {
//		printf("Correct!!\n");
//		i = 0;
//		while (string1[i] != '\0') {
//			if (string1[i] != ' '){
//				printf("%c", string1[i]);
//				i++;
//			}
//			else {
//				printf("\n");
//				i++;
//			}
//		}
//	}
//	else {
//		printf("Wrong!!");
//		exit(1);
//	}
//
//}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char src[] = "Hello";
//	char dst[6];
//
//	strcpy(dst, src);
//	printf("복사된 문자열 = %s \n", dst); //무엇이 출력될까요?
//	//실제 dst[] 안에는 무엇이 들어 있을까요?
//
//	printf("%d",strcmp(dst, src));
//
//	strcat(src, "good");
//
//	printf("%d", strcmp(dst, src));
//	
//	return 0; // src = “Hollywood” 이고
//}                                                      
//
//#include <string.h>
//
//int main(void) {
//
//	char sentence[] = "my life is for myself", ch;
//	char answer[] = "__ ____ __ ___ ______";
//	int i;
//	
//	char len = strlen(sentence);
//
//	while (strcmp(sentence, answer) != 0) {
//		printf("문자열을 입력하시오:%s", answer);
//		printf("글자를 추측하시오: ");
//		ch = getch();
//		
//		for (i = 0; i < strlen(sentence); i++) {
//			if (ch == sentence[i]) {
//				answer[i] = ch;
//			}
//		}
//	}
//
//	return 0;
//}
//#include <string.h>
//int main(void) {
//	int i;
//	char s[3][6] = {
//		"apple","open","straw"};
//
//	for (i = 0; i < strlen(s); i++) {
//		printf("%s", s[i]);
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//
//#define SIZE 6
//
//char mystrcpy(char* array1, char* array2) {
//
//	int i = 0;
//	int len = strlen(array2);
//
//	for (i = 0; i < len; i++) {
//		*array1 = *array2;
//		array1++;
//		array2++;
//	}
//	*array1 = '\0';
//
//	return array1;
//}
//
//int main(void)
//{
//	int i, k;
//	char fruits[SIZE][20] = {
//		"pineapple",
//		"banana",
//		"apple",
//		"tomato",
//		"pear",
//		"avocado"
//	};
//	for (k = 0; k < SIZE; k++) {
//		for (i = 0; i < SIZE - 1; i++) {
//			if (strcmp(fruits[i], fruits[i + 1]) > 0) {
//				char tmp[20];
//				mystrcpy(tmp, fruits[i]);
//				mystrcpy(fruits[i], fruits[i + 1]);
//				mystrcpy(fruits[i + 1], tmp);
//			}
//		}
//	}
//	for (k = 0; k < SIZE; k++)
//		printf("%s \n", fruits[k]);
//	return 0;
//}

//#include <string.h>
//
//int main(void) {
//	char s[] = "Hello, World";
//	char t[] = "Hello, World";
//
//	if (strcmp(s, t))
//		printf("문자열이 동일합니다. \n");
//	else {
//		printf("문자열이 동일하지 않습니다. \n");
//	}
//}

//#include <stdio.h>
//#include <math.h>
//
//struct point {
//	int x;
//	int y;
//};
//
//int main(void)
//{
//	struct point p1, p2;
//
//	double xdiff, ydiff;
//	double dist;
//
//	printf("점의 좌표를 입력하시오(x  y): ");
//	scanf("%d %d", &p1.x, &p1.y);
//
//	printf("점의 좌표를 입력하시오(x  y): ");
//	scanf("%d %d", &p2.x, &p2.y);
//
//	xdiff = (p1.x - p2.x) * (p1.x - p2.x);
//	ydiff = (p1.y - p2.y) * (p1.y - p2.y);
//	dist = sqrt(xdiff + ydiff);
//
//	printf("두 점사이의 거리는 %f입니다.\n", dist);
//	return 0;
//}

//#define SIZE 3
//
//struct student {
//	int id;
//	char name[100];
//	float grade;
//};
//
//int main(void) {
//	struct student p1[3];
//	int i;
//
//	for (i = 0; i < SIZE; i++) {
//		printf("학번을 입력하시오: ");
//		scanf("%d", &p1[i].id);
//		printf("이름을 입력하시오: ");
//		scanf("%s", p1[i].name);
//		printf("학점을 입력하시오: ");
//		scanf("%f", &p1[i].grade);
//	}
//
//	for (i = 0; i < SIZE; i++) {
//		printf("학번을 입력하시오: %d",p1[i].id);
//		
//		printf("이름을 입력하시오: %s",p1[i].name);
//		
//		printf("학점을 입력하시오: %f",p1[i].grade);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//union example {
//	int i;
//	char c;
//};
//
//int main(void)
//{
//	union example data;
//
//	data.c = 'A';
//	printf("data.c:%c   data.i:%d\n", data.c, data.i);
//
//	data.i = 10000;
//	printf("data.c:%c   data.i:%d\n", data.c, data.i);
//
//}

//int main(void) {
//	int i=0;
//	int* a;
//
//	a = &i;
//	printf("%lld\n", &i);
//	printf("%lld\n", a);
//	*a = 12031;
//	printf("%lld\n", &i);
//	printf("%lld\n", a);
//
//	return 0;
//}
//
//#include <stdio.h>
//#include<stdlib.h>
//
//// 영화를 구조체로 표현
//typedef struct movie
//{
//	char title[100];	// 영화 제목
//	double rating;	// 영화 평점
//}stru;
//
//int main(void)
//{
//	stru* ptr;
//	int i, n;
//
//	printf("영화의 개수: ");
//	scanf("%d", &n);
//	ptr = (stru*)malloc(sizeof(stru) * n);
//
//	for (i = 0; i < n; i++) {
//		printf("영화 제목: ");
//		scanf("%s", ptr[i].title);
//		printf("영화 평점: ");
//		scanf("%f", &ptr[i].rating);
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("영화 제목: %s", ptr[i].title);
//		printf("영화 평점: %f", ptr[i].rating);
//	}
//
//	free(ptr);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* prev;
	struct node* next;
	int value;
};

struct node* init;

void insert(int v);
void pop();
void print();

int main(void)
{
	insert(10); insert(20); insert(15); insert(17); insert(5);
	pop(); pop(); pop(); pop(); pop();

	return 0;
}

void insert(int v)
{
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->value = v;
	ptr->next = NULL;
	ptr->prev = NULL;

	if (init == NULL)
	{
		init = ptr;
	}
	else {
		struct node* current = init;
		while (current->next != NULL)
			current = current->next;
		current->next = ptr;
		ptr->prev = current;
	}

	print();
}

void pop()
{
	if (init->next == NULL) {
		free(init);
		init = NULL;
	}
	else {
		struct node* current = init;
		while (current->next != NULL) {
			current = current->next;
		}
		current->prev->next = NULL;
		free(current);
	}
	print();
}

void print()
{
	if (init == NULL)
		printf("The stack just emptied.");
	else {
		struct node* current = init;
		while (current->next != NULL) {
			printf("%d ", current->value);
			current = current->next;
		}
		printf("%d\n", current->value);
	}
}
