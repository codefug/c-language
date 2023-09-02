#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
} TreeNode;

//      n1
//     /  |
//  n2   n3

// 반복적인 순회


void inorder_iter(TreeNode* root)
{
	while (1) {
		for (; root; root = root->left)
			push(root);
		root = pop();
		if (!root) break;
		printf("[%d] ", root->data);
		root = root->right; //오른쪽부분부터 먼저 하게 만드는 거임
	}
} // 왼쪽부터 스택에 쭉 넣은 다음에 오른쪽으로 바꿔서 다시 왼쪽 넣음.

void  main()
{
	TreeNode* n1, * n2, * n3;

	n1 = (TreeNode*)malloc(sizeof(TreeNode));
	n2 = (TreeNode*)malloc(sizeof(TreeNode));
	n3 = (TreeNode*)malloc(sizeof(TreeNode));

	n1->data = 10;		// 첫 번째 노드를 설정한다.
	n1->left = n2;
	n1->right = n3;
	n2->data = 20;		// 두 번째 노드를 설정한다.
	n2->left = NULL;
	n2->right = NULL;
	n3->data = 30;		// 세 번째 노드를 설정한다.
	n3->left = NULL;
	n3->right = NULL;
	free(n1); free(n2); free(n3);
	return 0;
}