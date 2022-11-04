#include "structWork.h"
#include "LinkList.h"
#include "Stack.h"
#include "Queue.h"
#include "StringStatic.h"
#include "StringStack.h"

//测试顺序表
void TextlineList()
{
	LL ll;
	InitList(ll);
	insertFront(ll, 1);
	insertFront(ll, 2);
	insertFront(ll, 3);
	insertFixedPosition(ll, 0, 100);
	printList(ll);
	printf("%d\n", numEmlm(ll));

	listEmpty(ll);

	popEmlmFront(ll, 3);

	printList(ll);
	printf("%d\n", numEmlm(ll));

}
//测试链表
void TextLinkList()
{
	LL1* head = InitLinkList();

	PushFrontList(head, 1);
	PushFrontList(head, 2);
	PushFrontList(head, 3);

	PushBackList(head, 4);
	PushBackList(head, 5);
	PushBackList(head, 6);
	PushBackList(head, 6);
	PushBackList(head, 6);


	printLinkList(head);
	int o = LenList(head);
	printf("%d\n", o);
	printLinkList(head);

	DestoryList(head);
}
//测试栈
void TextStark()
{
	LS ls;
	InitLineStack(ls);
	PushLineStack(ls, 1);
	PushLineStack(ls, 2);
	PushLineStack(ls, 3);

	JudgeEmpty(ls);
	GetTopEmlm(ls);
	PopLineStack(ls);

	JudgeEmpty(ls);
	GetTopEmlm(ls);
	PopLineStack(ls);

	JudgeEmpty(ls);
	GetTopEmlm(ls);
	PopLineStack(ls);

	DestoryStack(ls);
	PushLineStack(ls, 3);
	GetTopEmlm(ls);
	

}
//测试队列
//void TextQueue()
//{
//	LQueue lq;
//	InitLineQueue(lq);
//	InsertBack(lq, 1);
//	InsertBack(lq, 2);
//	InsertBack(lq, 3);
//	InsertBack(lq, 4);
//	InsertBack(lq, 5);
//	InsertBack(lq, 6);
//	JudgeEmpty(lq);
//
//	printf("%d\n",FrontEmlm(lq));
//	GetEmlmNum(lq);
//
//	ClearLine(lq);
//	GetEmlmNum(lq);
//	InsertBack(lq, 4);
//	InsertBack(lq, 5);
//	InsertBack(lq, 6);
//
//	printf("%d\n", FrontEmlm(lq));
//	GetEmlmNum(lq);
//}
//测试串
void TextStringStatic1()
{
	SString T;
	SString S;
	//SString S1;
	//SString sub;
	char ch[] = "adafdfvv";
	char ch1[] = "avv";
	StrAssign(T, ch);
	StrAssign(S, ch1);

	printString(T);
	StrInsert(T, 3, S);
	printString(T);
	StrDelete(T, 5, 3);
	printString(T);


	int a = Index(T, S, 2);
	printf("%d\n", a);


	//printString(S);
	//printString(T);

	//printf("%d\n", StrCompare(T, S));




	/*Concat(S1, T, S);
	printString(S1);
	printf("%d\n", StrLength(S1));


	SubString(Sub, S1, 3, 10);
	printString(Sub);*/


	//printf("%d\n", StrLength(T));

	/*int a = StrCompare(T, S);
	printf("%d\n", a);*/


	/*printString(T);
	StrCopy(T, S);
	printString(T);

	printf("%d\n", StrEmpty(T));

	DestroyString(T);
	printf("%d\n", StrEmpty(T));
	DestroyString(S);*/
}
//测试堆存放串
void TestStaingStack()
{
	SSString S;
	SSString T;
	SSString S1;
	SSString S2;
	char str[] = "0123456789";
	char str1[] = "zzzz";

	InitStr(S);
	InitStr(T);
	InitStr(S1);
	InitStr(S2);
	StrAssign1(S, str);
	StrAssign1(T, str1);
	StrAssign1(S1, str);
	StrAssign1(S2, str1);
	StrConcat(T, S1, S2);

	printString(S1);

	SubString(S1, T, 2, 5);
	//StrInsert(S, 3, T);

	printString(S1);












}















typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	PrevOrder(root->left);
	printf("%c ", root->data);
	PrevOrder(root->right);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	PrevOrder(root->left);
	PrevOrder(root->right);
	printf("%c ", root->data);
}


//求节点的个数

int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right)+1;

}

//叶子节点个数
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right==NULL)
	{
		return 1;
	}

	return TreeLeafSize(root->left) + TreeLeafSize(root->right);

}


//二叉树的层序遍历




int main(void)
{
	//TextlineList();

	//TextLinkList();

	//TextStark();

	//TextQueue();

	//TextStringStatic1();

	//TestStaingStack();



	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;
	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;
	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;
	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;


	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;

	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
	printf("\n");

	
	printf("%d\n", TreeSize(A));

	printf("%d\n", TreeSize(B));


	printf("%d\n", TreeLeafSize(A));

	return 0;
}