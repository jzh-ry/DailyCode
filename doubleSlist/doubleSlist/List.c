#include "List.h"

ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}

//��ʼ��
ListNode* ListInit()
{
	ListNode* pHead = BuyListNode(0);
	pHead->next = pHead;
	pHead->prev = pHead;
	return pHead;
}
//��ӡ
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
//����
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

//β��
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
//ͷ��
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

//ͷɾ
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

//βɾ
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

//���ҵ�ַ
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

//����λ��
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

//ɾ��posλ�õ�Ԫ��
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


