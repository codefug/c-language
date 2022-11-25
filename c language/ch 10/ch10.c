#include <stdio.h>
#include <Windows.h>
void calStringLength(char* str) {
	int i = 0;
	//while (str[i++]!=0){
	while (*str != 0){
		i++;
		str++;
	}
	printf("%d", i);
}

int main(void) {

	/*char str[] = "A barking dog never bites";
	int i = 0;

	while (str[i] != 0)
		i++;
		printf("문자열 %s의 길이는 %d입니다.", str, i);*/

	/*char str[] = "I am a student at Incheon National University.";

	int i = 0;

	calStringLength(str);*/

	/*char name[100];
	char address[100];

	printf("이름이 어떻게 되시나요? ");
	gets_s(name, 99);

	printf("어디 사시나요? ");
	gets_s(address, 99);

	printf("안녕하세요, %s에 사는 %s씨.\n", address, name);*/

	//char sentence[100];
	//char haveto[100];
	//int i = 0;

	//printf("Insert a sentence: ");
	//gets_s(sentence, 100);
	//printf("Insert the same: ");
	//gets_s(haveto, 100);

	//while (sentence[i] != 0) {
	//	if (sentence[i] == haveto[i++]) {
	//		continue;
	//	}
	//	else {
	//		printf("Wrong!!");
	//		exit(0);
	//	}
	//}
	//printf("Correct!!");
	//printf("Words are: ");
	//int j;

	//for (j = 0; j < i; j++) {
	//	putch(sentence[j]);
	//	if (sentence[j] == ' ') {
	//		putch('\n');
	//	}

	//}


	return 0;
}