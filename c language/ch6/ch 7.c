#include <stdio.h>
#include <Windows.h>
#define student 16.0
#define size 10

int main(void) {
	
	 //배열
	
	/*
	int i;
	int scores[student];

	for (i = 0; i < student; i++) {
		scores[i] = (i+1) * 10;
		printf("socres[%d]=%d\n", i, scores[i]);
	}*/

	//float scores;
	//int sum = 0;
	//int i;
	//float average;

	//for (i = 0; i < student; i++) {
	//	printf("학생들의 성적을 입력하시오: ");
	//	scanf("%f", &scores);
	//	sum += scores;
	//}

	//average = sum / student;
	//printf("성적 평균: %.3f", average);

	//int list[5] = {0,};
	//int i = 0;

	//for (i = 0; i < 5; i++) {
	//	printf("%d = %d\n",i, list[i]);
	//}

	/*int list[5] = { 1,1 };
	int i = 0;

	for (i = 0; i < 5; i++) {
		printf("%d = %d\n", i, list[i]);
	}*/

	/*int list[5] = { 10,20,30,40,50 };
	int i = 0;

	for (i = 0; i < 5; i++) {
		printf("%d = %d\n", i, list[i]);

		printf("%d바이트입니다.", sizeof(list));
	}*/

	/*int i = 1;
	int attend;
	double criteria = 0;

	for (; i <= student; i++) {
		printf("%d번째 강의의 출석하셨나요? 출석은 1 결석은 0: ",i);
		scanf("%d", &attend);
		if (attend == 1) {
			criteria += 1;
		}
	}
	if (criteria * 3 < (student * 2)) {
		printf("수업 일수 부족입니다(%.5lf%%)", 100-(criteria / student)*100);
	}*/

	/*int list1[size];

	int i, minimum, number;

	for (i = 0; i < size; i++) {
		printf("무엇을 넣고 싶나요? : ");
		scanf("%d", &number);
		list1[i] = number;
	}

	printf("[ ");
	for (i = 0; i < size; i++) {
		printf("%d ", list1[i]);
	}
	printf("] \n");
	minimum = list1[0];

	for (i = 1; i < size; i++) {
		if (minimum > list1[i])
			minimum = list1[i];
	}
	printf("최솟값은 %d입니다", minimum);*/

	/*int key;
	int list[size] = { 1,2,3,4,5,6,7,8,9,0 }, i;

	printf("찾고 싶은 숫자(0~9): ");
	scanf("%d", &key);

	for (i = 0; i < size; i++) {
		if (list[i] == key) {
			printf("%d번째에 있습니다.", i + 1);
			break;
		}
	}
	if (i == size) {
		printf("탐색 실패");
	}*/

//int i, k,tmp,j;
//int list[size] = { 30,40,20,50,60,10,70,80,90,0 };
//
//HDC hdc = GetWindowDC(GetForegroundWindow());
//
//for (k = 0; k < size; k++) {
//	for (i = 0; i < size - 1 - k; i++) {
//		if (list[i] > list[i + 1]) {
//			tmp = list[i];
//			list[i] = list[i + 1];
//			list[i + 1] = tmp;
//		}
//		Rectangle(hdc, 0, 0, 800, 800);
//	}
//	for (j = 0; j < size; j++) {
//		Rectangle(hdc, 200 + 30 * j, 200, 230 + 30 * j, 200 - list[j]);
//	}
//	Sleep(1000);
//}
//for (i = 0; i < size; i++) {
//	printf(" %d ", list[i]);
//}
//
//int list2[3][5] = { {1,2,3,4,5},{5,6,7,8,9},{9,10,2,3,4} };
//int i, j, sum=0, min=list2[0][0],max=list2[0][0];
//
//for (i = 0; i < 3; i++) {
//	for (j = 0; j < 5; j++) {
//		printf("%d\n", list2[i][j]);
//		sum += list2[i][j];
//		if (min > list2[i][j])
//			min = list2[i][j];
//		if (max < list2[i][j])
//			max = list2[i][j];
//	}
//}
//
//printf("총 합계는 %d\n최댓값은%d\n최솟값은%d", sum,max,min);

return 0;
}