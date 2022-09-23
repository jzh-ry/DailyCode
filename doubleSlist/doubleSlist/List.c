#include "List.h"

ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}

//初始化
ListNode* ListInit()
{
	ListNode* pHead = BuyListNode(0);
	pHead->next = pHead;
	pHead->prev = pHead;
	return pHead;
}
//打印
void ListPrint(ListNode* pHead)
{
	assert(pHead);
	ListNode* cur = pHead->next;
	while (cur != pHead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
//销毁
void ListDestory(ListNode* pHead)
{
	assert(pHead);
	ListNode* cur = pHead->next;
	while (cur != pHead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(pHead);
	pHead = NULL;

}

//尾插
void ListPushBack(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* tail = pHead->prev;
	ListNode* newnode = BuyListNode(x);
	tail->next = newnode;
	newnode->prev = tail;

	newnode->next = pHead;
	pHead->prev = newnode;

}
//头插
void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	/*ListNode* first = pHead->next;
	ListNode* newnode = BuyListNode(x);

	pHead->next = newnode;
	newnode->prev = pHead;

	newnode->next = first;
	first->prev = newnode;*/

	ListNode* newnode = BuyListNode(x);
	newnode->next = pHead->next;
	newnode->prev = pHead->next->prev;

	pHead->next = newnode;
	newnode->next->prev = newnode;


}

//头删
void ListPopFront(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->next != pHead);
	ListNode* first = pHead->next;
	ListNode* Second = pHead->next->next;
	pHead->next = Second;
	Second->prev = first;
	free(first);
	first = NULL;
}

//尾删
void ListPopBack(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->next != pHead);

	ListNode* tail = pHead->prev;
	ListNode* prev = tail->prev;

	prev->next = pHead;
	pHead->prev = prev;
	
	free(tail);
	tail = NULL;

}

//查找地址
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* cur = pHead->next;
	while (cur != pHead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;

}

//在pos位置前插入元素
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* newnode = BuyListNode(x);

	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}

//删除pos位置的元素
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;

	prev->next = next;
	next->prev = prev;
	free(pos);
	pos = NULL;

}

//在pos下标前插入元素
void ListFixedInsert(ListNode* pHead, int pos, int x)
{
	assert(pos >= 1);
	ListNode* newnode = BuyListNode(x);
	ListNode* cur = pHead;
	for (int i = 1; i < pos; i++)
	{
		if (cur->next != pHead)
		{
			cur = cur->next;
		}
		else
		{
			printf("请输入合法下标\n");
			return;
		}
	}
	ListNode* next = cur->next;
	cur->next = newnode;
	newnode->prev = cur;

	newnode->next = next;
	next->prev = newnode;


}
//删除pos下标的元素
void ListFixedErase(ListNode* pHead, int pos)
{
	ListNode* cur = pHead->next;
	assert(pos >= 1);
	for (int i = 1; i < pos; i++)
	{
		if (cur->next != pHead)
		{
			cur = cur->next;
		}
		else
		{
			printf("请输入合法下标\n");
			return;
		}
	}
	ListNode* prev = cur->prev;
	ListNode* next = cur->next;

	prev->next = next;
	next->prev = prev;
	free(cur);



}




