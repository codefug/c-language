#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

// 20명의 학생들의 정보를 이진 탐색트리를 이용해서 삽입
// 생일이 빠른 학생부터 늦은 학생 순으로 단순연결리스트 구성
// 생일을 주면 해당 노드 삭제하고 후위순회해서 이름만 출력

typedef struct Studentree {
	int birth;
	char name;
	int grade;
	struct Studentree* left, * right;
}Studentree;

Studentree* new_node(int birth, char name, int grade)
{
	Studentree* temp = (Studentree*)malloc(sizeof(Studentree));
	if (temp == NULL) {
		printf("메모리 할당에 실패했습니다.\n");
		return NULL; // 메모리 할당 실패 시 NULL 포인터 반환
	}
	temp->birth = birth;
	temp->name = name;
	temp->grade = grade;
	temp->left = temp->right = NULL;
	return temp;
}

//생일을 비교해서 왼쪽이 더 생일이 빠른가 비교하는 함수
int is_left_early(int fbirth, int sbirth) {
	if (fbirth / 10000 < sbirth / 10000)
		return 1;
	else if (((fbirth % 10000) / 100) < ((sbirth % 10000) / 100))
		return 1;
	else if (fbirth % 100 < sbirth % 100)
		return 1;
	else
		return 0;
}

//이진탐색트리 삽입
Studentree* insert_node(Studentree* node, int birth,char name,int grade)
{
	// 트리가 공백이면 새로운 노드를 반환한다. 
	if (node == NULL) return new_node(birth,name,grade);

	// is_left_early함수를 통해서 새로 오는 노드의 값이 현재 노드의 값보다 빠를 경우 현재 노드의 왼쪽에서 다시 탐색 시작
	if (is_left_early( birth , node->birth))
		node->left = insert_node(node->left, birth,name,grade);
	else
		node->right = insert_node(node->right, birth,name,grade);
	// 변경된 루트 포인터를 반환한다. 
	return node;
}


Studentree* min_value_node(Studentree* node)
{
	Studentree* current = node;

	// 맨 왼쪽 단말 노드를 찾으러 내려감

	while (current->left != NULL)

		current = current->left;

	return current;

}

Studentree* delete_node(Studentree* root, int birth)
{
	//탐색 실패
	if (root == NULL) return root;

	// 만약 키가 루트보다 작으면 왼쪽 서브 트리에 있는 것임
	if (is_left_early(birth,root->birth))
		root->left = delete_node(root->left, birth);
	// 만약 키가 루트보다 크면 오른쪽 서브 트리에 있는 것임
	else if (is_left_early(root->birth,birth))
		root->right = delete_node(root->right, birth);
	// 키가 루트와 같으면 이 노드를 삭제하면 됨
	else { // 탐색에 성공해서 지운다 이제
		printf("삭제된 학생 정보 : %d %c %d", root->birth, root->name, root->grade);
		// 단말 노드인 경우
		if (root->left == NULL) {
			Studentree* temp = root->right;
			free(root);
			return temp;
		}
		// 자식이 하나인 경우
		else if (root->right == NULL) {
			Studentree* temp = root->left;
			free(root);
			return temp;
		}
		// 자식이 둘인 경우
		Studentree* temp = min_value_node(root->right);
		//둘중에 뭘 올려도 이진탐색 트리는 성립하기 때문에 오른쪽만 봄
		// 중외 순회시 후계 노드를 복사한다. 
		root->name = temp->name;
		root->grade = temp->grade;
		root->birth = temp->birth;
		//(오른쪽 자식에서 가장 작은 녀석을 root숫자에 복사한다.)
		// 중외 순회시 후계 노드를 삭제한다. 
		root->right = delete_node(root->right, temp->birth);
	}
	return root;
}
//후위 순회 출력 함수
void postorder(Studentree* root) {
	if (root) {
		postorder(root->left);	// 왼쪽 서브 트리 순회
		postorder(root->right);	// 오른쪽 서브 트리 순회
		printf("%c ", root->name); 	// 노드 방문
	}
}

void main() {
	Studentree* root = NULL;
	// 트리에 20명 삽입
	FILE* file = fopen("students.txt", "r");
	if (file == NULL) {
		printf("파일을 열 수 없습니다.\n");
		return;
	}
	
	for (int i=0; i<20; i++)
	{
		int birth;
		char name;
		int grade;
		fscanf(file, "%d %c %d", &birth, &name, &grade);
		root = insert_node(root, birth, name, grade);
	}
	fclose(file);
	// 해당 번호 삭제
	int birth,number=0;
	while (number++ != 5) {
		scanf_s("삭제할 %d번째 학생의 생일을 입력하시오: %d\n",&number, &birth);
		root = delete_node(root, birth);
	}
	// 후위순회로 이름 출력
	postorder(root);

	return;
}