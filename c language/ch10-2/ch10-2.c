#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	char solution1[100] = "meet at midnight",solution2[100]="happy happy y d",solution3[100]="sad sad happ sad";
	char answer[100] = "___", solution[100] = "", answer1[100] = "____ __ _______", answer2[100] = "_____ _____ _ _", answer3[100] = "___ ___ ____ ___";
	char ch;
	int i,n,number;

	srand(time(NULL));

	n = rand()%3;

	if (n == 0) {
		strcpy(solution, solution1);
		strcpy(answer, answer1);
	}
	else if (n == 1) {
		strcpy(solution, solution2);
		strcpy(answer, answer2);
	}
	else {
		strcpy(solution, solution3);
		strcpy(answer, answer3);
	}
	while (1) {
		printf("\n문자열을 입력하시오: %s \n", answer);
		printf("글자를 추측하시오: ");
		ch = getch();
		for (i = 0; solution[i] != NULL; i++) {
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break;
	}
	return 0;
}