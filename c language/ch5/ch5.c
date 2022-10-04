#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void) {

	//int x, y, big;
	
	//printf("첫번째 수= ");
	//scanf("%d", &x);
	//printf("두번째 수= ");
	//scanf("%d", &y);

	//big = (x > y) ? x : y;

	//printf("큰수 = %d", big);

	/*printf("정수를 입력하시오: ");
	scanf("%d", &x);

	if (x >= 123 && x <= 217)
		printf("x는 123과 217사이에 있습니다.");
	else
		printf("아무것도 아닙니다.");*/

	//int age,toeic;

	//printf("나이를 입력하시오: ");
	//scanf("%d", &age);
	//printf("토익점수는? ");
	//scanf("%d", &toeic);

	////31 699 넣어봐

	//if (age++ <= 30 && toeic++ >= 700)
	//	printf("and 기업 합격입니다.\n");
	////앞에서 조건이 맞으면 뒤에 안보는 경우 || 조건 틀리면 안보는 경우 && 뒤에 증감 연산자의 실행여부가 달려있다.
	//if (age++ <= 30 || toeic++ >= 700)
	//	printf("or 기업 합격입니다.\n");
	//if (age++ <=30 )

	/*int year;

	printf("윤년을 입력하시오.");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("윤년입니다.");
	else
		printf("윤년이 아닙니다.");*/

	//srand(time(NULL));

	//int ran_number = rand();

	//int coin = ran_number % 19 + 1;
	//
	//printf("%d", coin);
	//
	/*int grade;

	printf("성적을 입력하시오: ");
	scanf("%d", &grade);
	printf("학점 ");
	if (grade >= 90)
		grade = 'A';
	else if (grade >= 80)
		grade = 'B';
	else if (grade >= 70)
		grade = 'C';
	else
		grade = 'D';

	printf("%c\n", grade);*/

	/*char op;
	int x, y;

	printf("수식을 입력하시오: ");
	scanf("%d %c %d", &x, &op, &y);
	if (op == '+')
		printf("%d", x + y);
	else if (op == '-')
		printf("%d", x - y);
	else if (op == '*')
		printf("%d", x * y);
	else
		printf("%d", x / y);*/

	//int a, b, c, largest;

	//printf("3개의 정수를 입력하시오: ");
	//scanf("%d %d %d", &a, &b, &c);

	//if (a > b && a>c)
	//	largest = a;
	//else if (b > a && b>c)
	//	largest = b;
	//else 
	//	largest = c;

	//printf("가장 큰 정수는 %d 이다", largest);

	/*int number;
	printf("정수를 입력하시오: ");
	scanf("%d", &number);
	switch (number) {
	case 0:
		printf("없음\n");
		break;
	case 1:
		printf("하나\n");
		break;
	case 2:
		printf("둘\n");
		break;
	default:
		printf("많음\n");
		break;
	}*/
	
//int month, days;
//
//printf("일수를 알고 싶은 달을 입력하시오: ");
//scanf("%d", &month);
//
//switch (month)
//{
//case 2:
//	days = 28;
//	break;
//
//case 4: case 6: case 9: case 11:
//	days = 30;
//	break;
//
//default:
//	days = 31;
//	break;
//}
//printf("%d월의 일수는 %d일입니다.\n", month, days);

//HDC hdc = GetWindowDC(GetForegroundWindow());
//char command;
//
//printf("명령어를 입력하시오: ");
//command = getchar();
//
//if (command == 'r') {
//	Rectangle(hdc, 100, 200, 200, 300);
//}
//else if (command=='c'){Ellipse(hdc, 100, 200, 200, 300);}
//
//else {
//	printf("잘못된 명령어입니다.\a");
//}

//int user, computer;
//srand(time(NULL));
//
//printf("가위, 바위, 보!: ");
//scanf("%d",&user);
//
//computer = rand() % 3 +1;
//printf("사용자=%d\n", user);
//printf("컴퓨터=%d\n", computer);
//
//if ((user % 3) +1 == computer) {
//	printf("사용자 패배");
//}
//else if ((computer % 3) + 1 == user) {
//	printf("컴퓨터 패배");
//}
//else
//printf("비김");
//// 1 2 , 2 3, 3 1 이면 사용자 패배
//
//// 2 1 , 3 2, 1 3 이면 사용자 승리
//
//// 1 1 , 2 2, 3 3 이면 비김


	return 0;
}