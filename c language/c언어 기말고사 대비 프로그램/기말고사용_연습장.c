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
//	printf("�迭 ���ҵ��� ��� = %f", sum / 5);
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
//	printf("�ʱⰪ %d\n", *p);
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

// ���� 100 , 200 , �����Ⱚ , �����Ⱚ

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
//	//num1�� num2 �� ���� ����Ű�� �� �� 
//	//ū���� max�� ����Ű�� ����, 
//	//�������� min�� ����Ű�� ����, 
//	//����� average�� ����Ű�� ���� ��������.
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
//	myMath(&num1,&num2,&max,&min,&average); //�Լ��� ȣ���ϰ� ���ڸ� �˸°� �Ѱ� ������.
//
//	printf("max = %d, min = %d, average = %d\n", max, min, average);
//	return 0;
//}

//int main(void)
//{
//	int a[] = { 10, 20, 30, 40, 50 },b;
//
//	b = a;
//	printf("�迭�� �̸� = %u\n", b);
//	printf("�迭�� �̸� = %u\n", a);
//
//	printf("ù ��° ������ �ּ� = %u\n",&b );
//	printf("ù ��° ������ �ּ� = %u\n", &a);
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
//	printf("�迭 ���ҵ��� ��� = %f\n", result);
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

//#include <stdio.h> //���ڿ��� �Է� �޾� �� ���̸� ����ϴ� �Լ��� �ϼ��ϼ���.
//
//void calStringLength(char* l) {
//	int i = 0,sum=0;
//
//	while (l[i++] != '\0') {
//		sum += 1;
//	}
//	printf("���ڿ� %s �� ���̴� %d�Դϴ�.",l,sum);
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
//	int ch;		// �������� ����
//	ch = getch(); // ù ��° ���ڸ� �Է¹޴´�. 
//	putch(ch);
//
//	return 0;
//}

#include <stdio.h> //�־��� ���ڿ��� �� ���ھ� ��Ȯ�ϰ� ġ�� correct ��� ��µǰ� �ϼ���.
								 //Ʋ���� �ٷ� ���� �ǰ� �ϼ���.

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
//	printf("����� ���ڿ� = %s \n", dst); //������ ��µɱ��?
//	//���� dst[] �ȿ��� ������ ��� �������?
//
//	printf("%d",strcmp(dst, src));
//
//	strcat(src, "good");
//
//	printf("%d", strcmp(dst, src));
//	
//	return 0; // src = ��Hollywood�� �̰�
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
//		printf("���ڿ��� �Է��Ͻÿ�:%s", answer);
//		printf("���ڸ� �����Ͻÿ�: ");
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
//		printf("���ڿ��� �����մϴ�. \n");
//	else {
//		printf("���ڿ��� �������� �ʽ��ϴ�. \n");
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
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x  y): ");
//	scanf("%d %d", &p1.x, &p1.y);
//
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x  y): ");
//	scanf("%d %d", &p2.x, &p2.y);
//
//	xdiff = (p1.x - p2.x) * (p1.x - p2.x);
//	ydiff = (p1.y - p2.y) * (p1.y - p2.y);
//	dist = sqrt(xdiff + ydiff);
//
//	printf("�� �������� �Ÿ��� %f�Դϴ�.\n", dist);
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
//		printf("�й��� �Է��Ͻÿ�: ");
//		scanf("%d", &p1[i].id);
//		printf("�̸��� �Է��Ͻÿ�: ");
//		scanf("%s", p1[i].name);
//		printf("������ �Է��Ͻÿ�: ");
//		scanf("%f", &p1[i].grade);
//	}
//
//	for (i = 0; i < SIZE; i++) {
//		printf("�й��� �Է��Ͻÿ�: %d",p1[i].id);
//		
//		printf("�̸��� �Է��Ͻÿ�: %s",p1[i].name);
//		
//		printf("������ �Է��Ͻÿ�: %f",p1[i].grade);
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
//// ��ȭ�� ����ü�� ǥ��
//typedef struct movie
//{
//	char title[100];	// ��ȭ ����
//	double rating;	// ��ȭ ����
//}stru;
//
//int main(void)
//{
//	stru* ptr;
//	int i, n;
//
//	printf("��ȭ�� ����: ");
//	scanf("%d", &n);
//	ptr = (stru*)malloc(sizeof(stru) * n);
//
//	for (i = 0; i < n; i++) {
//		printf("��ȭ ����: ");
//		scanf("%s", ptr[i].title);
//		printf("��ȭ ����: ");
//		scanf("%f", &ptr[i].rating);
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("��ȭ ����: %s", ptr[i].title);
//		printf("��ȭ ����: %f", ptr[i].rating);
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
