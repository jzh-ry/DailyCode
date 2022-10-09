#include "Queue.h"






//��ʼ��
void InitLineQueue(LQueue& lqueue)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	lqueue.head = newnode;
	lqueue.tail = newnode;
}


//����
void DestoryQueue(LQueue& lqueue)
{
	QNode* cur = lqueue.head->next;
	while (lqueue.head == lqueue.tail)
	{
		lqueue.head = cur->next;
		free(cur);
		cur = lqueue.head->next;
	}
}

//��β��
void InsertBack(LQueue& lqueue, EmlmType x)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode*));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	lqueue.tail->next = newnode;
	lqueue.tail = newnode;
}

//��ͷ��
void PopFront(LQueue& lqueue)
{
	if (lqueue.head->next != NULL)
	{
		QNode* cur = lqueue.head->next;
		lqueue.head->next = cur->next;
	}
	else
	{
		lqueue.tail = NULL;
		printf("������Ϊ��\n");
		exit(-1);
	}
	
	
}

//ȡ����ͷԪ��
void GetEmlmFront(LQueue& lqueue)
{
	if (lqueue.head->next != NULL)
	{
		printf("%d \n",lqueue.head->next->data);
	}
	else
	{
		printf("�����ѿ�\n");
	}
}


//����Ԫ�ظ���
void GetEmlmNum(LQueue& lqueue)
{
	if (lqueue.head == lqueue.tail)
	{
		printf("����Ԫ��Ϊ0\n");
		return;
	}
	int count = 0;
	QNode* cur = lqueue.head;
	while (cur->next != NULL)
	{
		cur = cur->next;
		count++;
	}
	printf("����Ԫ�ظ���Ϊ��%d\n",count);
}


//�Ƿ�Ϊ��
void JudgeEmpty(LQueue& lqueue)
{
	if (lqueue.head == lqueue.tail)
	{
		printf("����Ϊ��\n");
	}
	else
	{
		printf("���в�Ϊ��\n");
	}
}

//���ض�ͷԪ��
EmlmType FrontEmlm(LQueue& lqueue)
{
	if (lqueue.head != lqueue.tail)
	{
		return lqueue.head->next->data;
	}
	else
	{
		printf("�����Ѿ�Ϊ��\n");
		exit(-1);
	}
}

//��ն���
void ClearLine(LQueue& lqueue)
{
	lqueue.tail = lqueue.head;
}