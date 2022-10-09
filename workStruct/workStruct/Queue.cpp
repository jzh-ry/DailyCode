#include "Queue.h"






//初始化
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


//销毁
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

//队尾插
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

//队头出
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
		printf("队列已为空\n");
		exit(-1);
	}
	
	
}

//取出队头元素
void GetEmlmFront(LQueue& lqueue)
{
	if (lqueue.head->next != NULL)
	{
		printf("%d \n",lqueue.head->next->data);
	}
	else
	{
		printf("对列已空\n");
	}
}


//队列元素个数
void GetEmlmNum(LQueue& lqueue)
{
	if (lqueue.head == lqueue.tail)
	{
		printf("对列元素为0\n");
		return;
	}
	int count = 0;
	QNode* cur = lqueue.head;
	while (cur->next != NULL)
	{
		cur = cur->next;
		count++;
	}
	printf("对列元素个数为：%d\n",count);
}


//是否为空
void JudgeEmpty(LQueue& lqueue)
{
	if (lqueue.head == lqueue.tail)
	{
		printf("对列为空\n");
	}
	else
	{
		printf("对列不为空\n");
	}
}

//返回队头元素
EmlmType FrontEmlm(LQueue& lqueue)
{
	if (lqueue.head != lqueue.tail)
	{
		return lqueue.head->next->data;
	}
	else
	{
		printf("对列已经为空\n");
		exit(-1);
	}
}

//清空队列
void ClearLine(LQueue& lqueue)
{
	lqueue.tail = lqueue.head;
}