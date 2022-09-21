#include "SList.h"


//打印链表
void SListPrint(SLTNode* pHead)
{
	SLTNode* cur = pHead;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//创建新节点
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}
//查找链表节点数量
int FindNode(SLTNode* pHead)
{
	SLTNode* cur = pHead;
	if (cur != NULL)
	{
		int count = 1;
		while (cur->next != NULL)
		{
			cur = cur->next;
			count++;
		}
		return count;
	}
	return -1;
	
}


//尾插
void SListPushBack(SLTNode** ppHead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);

	if (*ppHead == NULL)//判断头指针是否为空
	{
		*ppHead = newnode;
	}
	else
	{
		SLTNode* tail = *ppHead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

//头插
void SListPushFront(SLTNode** ppHead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);

	newnode->next = *ppHead;
	*ppHead = newnode;
}

//头删
void SListPopFront(SLTNode** ppHead)
{
	if (*ppHead == NULL)
	{
		return;
	}
	SLTNode* next = (*ppHead)->next;
	free(*ppHead);
	*ppHead = next;
}


//尾删
void SListPopBack(SLTNode** ppHead)
{
	if (*ppHead == NULL)
	{
		return;
	}
	else if ((*ppHead)->next == NULL)
	{
		free(*ppHead);
		*ppHead = NULL;
	}
	else
	{
		SLTNode* last = *ppHead;
		while (last->next->next != NULL)
		{
			last = last->next;
		}
		free(last->next);
		last->next = NULL;
	}

	
}

void SListPopBack1(SLTNode** ppHead)
{
	if (*ppHead == NULL)
	{
		return;
	}
	else if ((*ppHead)->next == NULL)
	{
		free(*ppHead);
		*ppHead = NULL;
	}
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *ppHead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
	
}

//查找(返回地址指针)
SLTNode* SListFind(SLTNode* pHead, SLTDataType x)
{
	SLTNode* cur = pHead;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//查找（返回元素下标）
int SListFind1(SLTNode* pHead, SLTDataType x)
{
	SLTNode* cur = pHead;
	int count = 1;
	while (cur->data != x && cur->next != NULL)
	{
		cur = cur->next;
		count++;
	}
	if (cur->data == x)
	{
		return count;
	}
	return -1;
	
}


//固定位置插入
void SListInsert(SLTNode** ppHead, SLTNode* pos, SLTDataType x)
{

	if (pos == *ppHead)
	{
		SListPushFront(ppHead, x);
	}
	else
	{
		SLTNode* newnode = BuySListNode(x);

		SLTNode* prev = *ppHead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
	
}

//固定位置删除
void SListErase(SLTNode** ppHead, SLTNode* pos)
{
	if (pos == *ppHead)
	{
		SListPopFront(ppHead);
	}
	else
	{
		SLTNode* prev = *ppHead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
	
}

//固定位置插入（下标）
void SListFixedInsert(SLTNode** ppHead, int pos, int x)
{
	SLTNode* newnode = BuySListNode(x);

	if (pos<1 || pos>FindNode(*ppHead))
	{
		return;
	}
	else if (pos == 1)
	{
		SListPushFront(ppHead, x);
	}
	else
	{
		SLTNode* cur = *ppHead;
		for (int i = 2; i < FindNode(*ppHead);i++)
		{
			cur = cur->next;
		}
		newnode->next = cur->next;
		cur->next = newnode;
	}

}




//固定位置删除（下标）
void SListFixedErase(SLTNode** ppHead, int pos)
{

}














