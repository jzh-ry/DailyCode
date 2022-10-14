#include <stdio.h>
#include <stdlib.h>



//1、
//typedef struct lineList
//{
//	int data;
//	struct lineList* next;
//}SL;
//
//void InsertPushFront(SL** pHead, int x)
//{
//	SL* newnode = (SL*)malloc(sizeof(SL));
//	newnode->data = x;
//	newnode->next = NULL;
//	if (newnode == NULL)
//	{
//		return;
//	}
//	newnode->next = *pHead;
//	*pHead = newnode;
//
//}
//
//void print(SL* Head)
//{
//	SL* cur = Head;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
//
//void reserveList(SL** pHead)
//{
//	//反转
//	SL* first = *pHead;
//	SL* second = first->next;
//	SL* third = second->next;
//	
//	first->next = NULL;
//	while (third != NULL)
//	{
//		second->next = first;
//		first = second;
//		second = third;
//		third = third->next;
//	}
//	second->next = first;
//	*pHead = second;
//	//去重
//	first = *pHead;
//	while (first->next != NULL)
//	{
//		if (first->data == first->next->data)
//		{
//			second = first;
//			third = first->next;
//			first->next = first->next->next;
//			first = second;
//			free(third);
//		}
//		else
//		{
//			first = first->next;
//		}
//	}
//
//}
//
////void reserveList1(SL** pHead)
////{
////	//先去重，放到数组中
////	int arr[100] = { 0 };
////	SL* cur = *pHead;
////	int i = 0;
////	while (cur->next != NULL)
////	{
////		if (cur->data != cur->next->data)
////		{
////			arr[i] = cur->data;
////			i++;
////			cur = cur->next;
////
////		}
////		else
////		{
////			cur = cur->next;
////		}
////	}
////	arr[i] = cur->data;
////
////	//倒放到链表中
////	cur = *pHead;
////	while (i >= 0)
////	{
////		cur->data = arr[i];
////		i--;
////		cur = cur->next;
////		if (i == 0)
////		{
////			cur->next = NULL;
////		}
////	}
////	
////}
//
//
//int main()
//{
//	SL* head = NULL;
//	InsertPushFront(&head, 1);
//	InsertPushFront(&head, 2);
//	InsertPushFront(&head, 2);
//	InsertPushFront(&head, 3);
//	InsertPushFront(&head, 4);
//	InsertPushFront(&head, 41);
//	InsertPushFront(&head, 41);
//	InsertPushFront(&head, 41);
//	InsertPushFront(&head, 43);
//
//	print(head);
//	reserveList(&head);
//	print(head);
//
//
//	return 0;
//}



//2、
//结构体
//typedef struct CList
//{
//	int data;
//	struct CList* next;
//}CList;
////创建新节点
//CList* CreatNode(int x)
//{
//	CList* newnode = (CList*)malloc(sizeof(CList));
//	newnode->data = x;
//	newnode->next = NULL;
//	return newnode;
//
//}
////初始化
//CList* InitCList()
//{
//	CList* pHead = CreatNode(0);
//	pHead->next = pHead;
//	return pHead;
//}
////头插
//void PushFrontList(CList* pHead,int x)
//{
//	CList* newnode = CreatNode(x);
//	CList* tail = pHead->next;
//
//	newnode->next = pHead->next;
//	pHead->next = newnode;
//	
//
//}
////打印
//void printList(CList* pHead)
//{
//	CList* cur = pHead->next;
//	while (cur != pHead)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
////合并删除
//void addAndDelete(CList* CL1,CList* CL2,int pos,int len)
//{
//	//合并
//	CList* taila = CL1->next;
//	CList* tailb = CL2->next;
//	while (taila->next != CL1)
//	{
//		taila = taila->next;
//	}
//	while (tailb->next != CL2)
//	{
//		tailb = tailb->next;
//	}
//	taila->next = CL2->next;
//	tailb->next = CL1;
//	free(CL2);
//
//	//删除
//	CList* cur = CL1->next;
//	for (int i = 1; i < pos-1; i++)
//	{
//		cur = cur->next;
//	}
//	CList* tmp = cur->next;
//	for (int i = 1; i < len; i++)
//	{
//		CList* tmp1 = tmp;
//		tmp = tmp->next;
//		free(tmp1);
//	}
//	cur->next = tmp->next;
//
//}
//
//
//int main()
//{
//	CList* CL1 = InitCList();
//	CList* CL2 = InitCList();
//	PushFrontList(CL1, 5);
//	PushFrontList(CL1, 4);
//	PushFrontList(CL1, 3);
//	PushFrontList(CL1, 2);
//	PushFrontList(CL1, 1);
//
//	printList(CL1);
//
//	PushFrontList(CL2, 10);
//	PushFrontList(CL2, 9);
//	PushFrontList(CL2, 8);
//	PushFrontList(CL2, 7);
//	PushFrontList(CL2, 6);
//
//	printList(CL2);
//	addAndDelete(CL1, CL2, 2, 5);
//	printList(CL1);
//
//
//
//	return 0;
//}



//没写完
//typedef struct CList
//{
//	int data;
//	struct CList* next;
//}CL;
//
////初始化
//CL* InitList()
//{
//	CL* headNode = (CL*)malloc(sizeof(CL));
//	headNode->next = headNode;
//	return headNode;
//}
//
////创建新的节点
//CL* CreatNode(int x)
//{
//	CL* newnode = (CL*)malloc(sizeof(CL));
//	newnode->data = x;
//	newnode->next = NULL;
//
//	return newnode;
//}
//
//
////头插
//void insertPushFront(CL* pHead, int x)
//{
//	CL* newnode = CreatNode(x);
//	CL* tail = pHead;
//	
//	newnode->next = pHead->next;
//	pHead->next = newnode;
//	
//}
//
////打印
//void printList(CL* pHead)
//{
//	CL* cur = pHead;
//}
//
//
//int main()
//{
//	CL* cl = InitList();
//	insertPushFront(cl, 1);
//	insertPushFront(cl, 1);
//	insertPushFront(cl, 1);
//
//
//	return 0;
//}










//3、
//#define INIT_SIZE 10
////结构体
//typedef struct lineList
//{
//	int* data;
//	int size;
//	int sizelist;
//}LL;
////初始化
//void InitList(LL* ps)
//{
//	ps->data = NULL;
//	ps->size = 0;
//	ps->sizelist = 0;
//}
////扩容
//void CheckCapacity(LL* ps)
//{
//	if (ps->size == ps->sizelist)
//	{
//		int* newdata = (int*)realloc(ps->data, (ps->sizelist + INIT_SIZE) * sizeof(int));
//		if (newdata != NULL)
//		{
//			ps->data = newdata;
//		}
//		else
//		{
//			return;
//		}
//		ps->sizelist += INIT_SIZE;
//	}
//}
////尾插
//void insertPushBack(LL* ps,int x)
//{
//	CheckCapacity(ps);
//	ps->data[ps->size] = x;
//	ps->size++;
//}
//
////打印
//void print(LL* ps)
//{
//	for (int i = 0; i < ps->size; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("\n");
//}
//
//
////分类
//void classifyList(LL* ps)
//{
//	LL tmp;
//	//tmp.data = NULL;
//	//tmp.data = (int*)realloc(tmp.data,(ps->sizelist) * sizeof(int));
//	InitList(&tmp);
//	CheckCapacity(&tmp);
//	tmp.size = ps->size;
//	tmp.sizelist = ps->sizelist;
//	int j = 0;
//	for (int i = 0; i < ps->size; i++)
//	{
//		if (ps->data[i] < 0)
//		{
//			tmp.data[j] = ps->data[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < ps->size; i++)
//	{
//		if (ps->data[i] == 0)
//		{
//			tmp.data[j] = ps->data[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < ps->size; i++)
//	{
//		if (ps->data[i] > 0)
//		{
//			tmp.data[j] = ps->data[i];
//			j++;
//		}
//	}
//	*ps = tmp;
//}
//
//
//int main()
//{
//	LL ll;
//	InitList(&ll);
//	insertPushBack(&ll, 1);
//	insertPushBack(&ll, 2);
//	insertPushBack(&ll, -2);
//	insertPushBack(&ll, 4);
//	insertPushBack(&ll, 5);
//	insertPushBack(&ll, -5);
//	insertPushBack(&ll, -8);
//	insertPushBack(&ll, -1);
//	insertPushBack(&ll, -3);
//	insertPushBack(&ll, -7);
//	insertPushBack(&ll, 0);
//	insertPushBack(&ll, 0);
//	insertPushBack(&ll, 5);
//
//	print(&ll);
//
//	classifyList(&ll);
//	print(&ll);
//
//
//	return 0;
//}








