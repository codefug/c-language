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
		printf("���ڿ� %s�� ���̴� %d�Դϴ�.", str, i);*/

	/*char str[] = "I am a student at Incheon National University.";

	int i = 0;

	calStringLength(str);*/

	/*char name[100];
	char address[100];

	printf("�̸��� ��� �ǽó���? ");
	gets_s(name, 99);

	printf("��� ��ó���? ");
	gets_s(address, 99);

	printf("�ȳ��ϼ���, %s�� ��� %s��.\n", address, name);*/

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