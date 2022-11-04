//#include <stdio.h>
//
//
//
//#define MAX_SIZE 10
//typedef int ElemType;
//typedef struct T
//{
//	int row;//行下标
//	int col;//列下标
//	ElemType e;
//}Triple;
//
//typedef struct M
//{
//	Triple data[MAX_SIZE+1];
//	int mu;//行数
//	int nu;//列数
//	int tu;//非零元个数
//}Matrix;
//
//void AddM(Matrix A, Matrix B, Matrix& C)
//{
//	if (A.mu != B.mu || A.nu != B.nu)
//	{
//		return;
//	}
//	C.mu = A.mu;
//	C.nu = A.nu ;
//
//	int ai, aj, ap;
//	int bi, bj, bp;
//	int ci, cj, cp;
//	ap = bp = cp = 1;
//
//	while (ap <= A.tu && bp <= B.tu)
//	{
//		ai = A.data[ap].row;
//		bi = B.data[bp].row;
//		if (ai > bi)
//		{
//			ci = bi;
//			while (ci == B.data[bp].row)
//			{
//				C.data[cp].row = ci;
//				C.data[cp].col = B.data[bp].col;
//				C.data[cp].e = B.data[bp].e;
//				cp++;
//				bp++;
//			}
//		}
//		else if (ai < bi)
//		{
//			ci = ai;
//			while (ci = A.data[ap].row)
//			{
//				C.data[cp].row = ci;
//				C.data[cp].col = A.data[ap].col;
//				C.data[cp].e = A.data[ap].e;
//				cp++;
//				ap++;
//			}
//		}
//		else
//		{
//			ci = ai;
//			aj = A.data[ap].col;
//			bj = B.data[bp].col;
//			if (aj > bj)
//			{
//				C.data[cp].row = ci;
//				C.data[cp].col = B.data[bp].col;
//				C.data[cp].e = B.data[bp].e;
//				cp++;
//				bp++;
//			}
//			else if (aj < bj)
//			{
//				C.data[cp].row = ci;
//				C.data[cp].col = A.data[ap].col;
//				C.data[cp].e = A.data[ap].e;
//				cp++;
//				ap++;
//			}
//			else
//			{
//				if (A.data[ap].e + B.data[bp].e == 0)
//				{
//					ap++;
//					bp++;
//				}
//				else
//				{
//					C.data[cp].row = ci;
//					C.data[cp].col = A.data[ap].col;
//					C.data[cp].e = A.data[ap].e + B.data[bp].e;
//					cp++;
//				}
//			}
//		}
//	}
//
//	while (ap <= A.tu)
//	{
//		C.data[cp].row = A.data[ap].row;
//		C.data[cp].col = A.data[ap].col;
//		C.data[cp].e = A.data[ap].e;
//		cp++;
//		ap++;
//	}
//	while (ap <= B.tu)
//	{
//		C.data[cp].row = B.data[bp].row;
//		C.data[cp].col = B.data[bp].col;
//		C.data[cp].e = B.data[bp].e;
//		cp++;
//		bp++;
//	}
//	C.tu = --cp;
//}
//
//
//
//int main(void)
//{
//	Matrix A;
//	Matrix B;
//	Matrix C;
//
//	AddM(A, B, C);
//	return 0;
//}
//
//
//
//
//
////任务二    焦子豪    2021级1班   2021012411   10-27
//typedef struct S
//{
//	char* ch;
//	int len;
//}HString;
//
//
//void StrDelete(HString& S, int pos, int len)
//{
//	if (pos + len > S.len || pos <= 0)
//	{
//		return;
//	}
//	for (int i = pos; i <= S.len - len; i++)
//	{
//		S.ch[i] = S.ch[i + pos];
//	}
//	S.len -= len;
//}
//



//任务一  焦子豪   2021级1班    2021012411   11/4
//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//typedef char EmleType;
//typedef struct TNode
//{
//	EmleType data;
//	struct TNode* leftChild;
//	struct TNode* rightChild;
//
//}TTNode;
//
//int leafNode(TTNode* root,int &num)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (root->leftChild == NULL && root->rightChild == NULL)
//	{
//		num++;
//	}
//	leafNode(root->leftChild,num);
//	leafNode(root->rightChild,num);
//	return num;
//}
//
//
//
//
//
//
//int main(void)
//{
//	TTNode* A = (TTNode*)malloc(sizeof(TTNode));
//	A->data = 'A';
//	A->leftChild = NULL;
//	A->rightChild = NULL;
//
//	TTNode* B = (TTNode*)malloc(sizeof(TTNode));
//	B->data = 'B';
//	B->leftChild = NULL;
//	B->rightChild = NULL;
//
//	TTNode* C = (TTNode*)malloc(sizeof(TTNode));
//	C->data = 'C';
//	C->leftChild = NULL;
//	C->rightChild = NULL;
//
//	TTNode* D = (TTNode*)malloc(sizeof(TTNode));
//	D->data = 'D';
//	D->leftChild = NULL;
//	D->rightChild = NULL;
//
//	TTNode* E = (TTNode*)malloc(sizeof(TTNode));
//	E->data = 'E';
//	E->leftChild = NULL;
//	E->rightChild = NULL;
//	
//	TTNode* F = (TTNode*)malloc(sizeof(TTNode));
//	F->data = 'F';
//	F->leftChild = NULL;
//	F->rightChild = NULL;
//
//	TTNode* G = (TTNode*)malloc(sizeof(TTNode));
//	G->data = 'G';
//	G->leftChild = NULL;
//	G->rightChild = NULL;
//
//
//	A->leftChild = B;
//	A->rightChild = C;
//	B->leftChild = D;
//	B->rightChild = E;
//	C->leftChild = F;
//	C->rightChild = G;
//	int num = 0;
//	printf("%d\n", leafNode(A,num));
//
//
//
//
//	return 0;
//}





//任务二  焦子豪   2021级1班    2021012411   11/4
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
typedef char ElemType;
//孩子节点
typedef struct CTNode
{
	int child;
	struct CTNode* next;
}Childptr;
//双亲节点
typedef struct
{
	int parent;
	ElemType data;
	Childptr* firstChild;
}CTBox;
//树结构
typedef struct
{
	CTBox nodes[MAX_SIZE];
	int n;
	int r;
}CTree;


void ParentNode(CTree* tree, int i)
{
	if (i < 0 || i >= tree->n)
	{
		return;
	}
	int ret = tree->nodes[i].parent;
	if (ret == -1)
	{
		printf("此位置存储根节点，没有双亲\n");
		return;
	}
	printf("%c\n", tree->nodes[ret].data);


}





int main(void)
{
	//手动创建一颗树
	CTree* Tree = (CTree*)malloc(sizeof(CTree));
	Tree->n = 6;
	Tree->r = 0;

	Tree->nodes[0].parent = -1;
	Tree->nodes[0].data = 'A';
	Tree->nodes[0].firstChild = (Childptr*)malloc(sizeof(Childptr));
	Tree->nodes[0].firstChild->child = 1;
	Tree->nodes[0].firstChild->next = (Childptr*)malloc(sizeof(Childptr));
	Tree->nodes[0].firstChild->next->child = 2;
	Tree->nodes[0].firstChild->next->next = NULL;

	Tree->nodes[1].parent = 0;
	Tree->nodes[1].data = 'B';
	Tree->nodes[1].firstChild = (Childptr*)malloc(sizeof(Childptr));
	Tree->nodes[1].firstChild->child = 3;
	Tree->nodes[1].firstChild->next = (Childptr*)malloc(sizeof(Childptr));
	Tree->nodes[1].firstChild->next->child = 4;
	Tree->nodes[1].firstChild->next->next = NULL;


	Tree->nodes[2].parent = 0;
	Tree->nodes[2].data = 'C';
	Tree->nodes[2].firstChild = (Childptr*)malloc(sizeof(Childptr));
	Tree->nodes[2].firstChild->child = 5;
	Tree->nodes[2].firstChild->next = NULL;


	Tree->nodes[3].parent = 1;
	Tree->nodes[3].data = 'D';
	Tree->nodes[3].firstChild = NULL;
	
	Tree->nodes[4].parent = 1;
	Tree->nodes[4].data = 'E';
	Tree->nodes[4].firstChild = NULL;

	Tree->nodes[5].parent = 2;
	Tree->nodes[5].data = 'F';
	Tree->nodes[5].firstChild = NULL;
	
	
	ParentNode(Tree, 0);
	ParentNode(Tree, 1);
	ParentNode(Tree, 2);
	ParentNode(Tree, 3);
	ParentNode(Tree, 4);
	ParentNode(Tree, 5);
	return 0;
}






















