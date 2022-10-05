#include "LinkList.h"


//创建新节点
LL1* creatNode(LL1* plist)
{
	LL1* newnode = (LL1*)malloc(sizeof(LL1));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->next = NULL;
	return newnode;
}

//初始化
LL1* InitLinkList()
{
	LL1* Node = (LL1*)malloc(sizeof(LL1));
	Node->next = NULL;
	return Node;
}

//打印
void printLinkList(LL1* pHead)
{
	if (pHead->next != NULL)
	{
		LL1* cur = pHead->next;
		while (cur != NULL)
		{
			printf("%d ", cur->data);
			cur = cur->next;
		}
		printf("\n");
	}
	else
	{
		printf("\n");
	}
	
}

//头插
void PushFrontList(LL1* plist, EmlmType x)
{
	LL1* newnode = creatNode(plist);
	newnode->data = x;
	newnode->next = plist->next;
	plist->next = newnode;
}

//尾插
void PushBackList(LL1* plist, EmlmType x)
{
	LL1* newnode = creatNode(plist);
	newnode->data = x;
	LL1* cur = plist->next;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = newnode;
	newnode->next = NULL;
}

//头删
void PopFrontList(LL1* plist)
{
	if (plist->next == NULL)
	{
		printf("链表中没有节点可以删除\n");
		exit(-1);
	}
	LL1* cur = plist->next;
	plist->next = cur->next;
	free(cur);
}


//尾删
void PopBackList(LL1* plist)
{
	LL1* cur = plist->next;
	LL1* prev = plist;
	if (plist->next == NULL)
	{
		printf("没有节点可以删除！\n");
		exit(-1);
	}
	while (cur->next != NULL)
	{
		prev = prev->next;
		cur = cur->next;
	}
	free(cur);
	prev->next = NULL;
}

//固定位置插入
void PushFixedList(LL1* plist, int pos, EmlmType x)
{
	if (pos <= 0)
	{
		printf("请插入正确位置！\n");
		exit(-1);
	}
	LL1* newnode = creatNode(plist);
	newnode->data = x;
	LL1* cur = plist;
	for (int i = 1; i < pos; i++)
	{
		cur = cur->next;
		if (cur == NULL)
		{
			printf("请插入正确位置！\n");
			exit(-1);
		}
	}
	newnode->next = cur->next;
	cur->next = newnode;
}



//固定位置删除
void PopFixedList(LL1* plist, int pos)
{
	if (pos <= 0)
	{
		printf("请删除正确位置！\n");
		exit(-1);
	}
	else if (plist->next == NULL)
	{
		printf("链表已空!\n");
		exit(-1);
	}
	LL1* cur = plist;
	LL1* tmp = NULL;
	for (int i = 1; i < pos; i++)
	{
		cur = cur -> next;
		if (cur == NULL)
		{
			printf("请删除正确位置！\n");
			exit(-1);
		}
	}
	tmp = cur->next;
	cur->next = cur->next->next;
	free(tmp);
}


//指定元素前插入
void PushEmlmList(LL1* plist, EmlmType y, EmlmType x)
{
	LL1* cur = plist;
	while (cur->next->data != y)
	{
		cur = cur->next;
		if (cur->next == NULL)
		{
			printf("没有指定元素!\n");
			exit(-1);
		}
	}
	LL1* newnode = creatNode(plist);
	newnode->data = x;
	newnode->next = cur->next;
	cur->next = newnode;

}
//删除指定元素
void PopEmlmList(LL1* plist, EmlmType x)
{
	LL1* cur = plist;
	while (cur->next->data != x)
	{
		cur = cur->next;
		if (cur->next == NULL)
		{
			printf("没有您要删除的元素！\n");
			exit(-1);
		}
	}
	LL1* tmp = cur->next;
	cur->next = tmp->next;
	free(tmp);

}

//查找元素位置,返回下标
int FindEmlmList(LL1* plist, EmlmType x)
{
	int i = 1;
	LL1* cur = plist->next;
	while (cur->data != x)
	{
		cur = cur->next;
		i++;
		if (cur == NULL)
		{
			printf("没有您要找的元素\n");
			exit(-1);
		}
	}
	return i;

}
//返回链表长度
int LenList(LL1* plist)
{
	int i = 0;
	LL1* cur = plist->next;
	while (cur != NULL)
	{
		cur = cur->next;
		i++;
	}
	return i;
}
//销毁链表
void DestoryList(LL1* plist)
{
	LL1* cur = plist->next;
	while (cur != NULL)
	{
		free(plist);
		plist = cur;
		cur = cur->next;
	}
	free(plist);
}
