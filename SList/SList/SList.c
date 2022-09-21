#include "SList.h"


//��ӡ����
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

//�����½ڵ�
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}
//��������ڵ�����
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


//β��
void SListPushBack(SLTNode** ppHead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);

	if (*ppHead == NULL)//�ж�ͷָ���Ƿ�Ϊ��
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

//ͷ��
void SListPushFront(SLTNode** ppHead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);

	newnode->next = *ppHead;
	*ppHead = newnode;
}

//ͷɾ
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


//βɾ
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

//����(���ص�ַָ��)
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
//���ң�����Ԫ���±꣩
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


//�̶�λ�ò���
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

//�̶�λ��ɾ��
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

//�̶�λ�ò��루�±꣩
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




//�̶�λ��ɾ�����±꣩
void SListFixedErase(SLTNode** ppHead, int pos)
{

}














