#pragma once
#include <stdio.h>
#include <stdlib.h>


typedef int EmlmType;
typedef struct LineQueue
{
	EmlmType data;
	struct LineQueue* next;
}QNode;

typedef struct QueuePointer
{
	QNode* head;
	QNode* tail;
}LQueue;


//初始化
void InitLineQueue(LQueue& lqueue);
//销毁
void DestoryQueue(LQueue& lqueue);
//队尾插
void InsertBack(LQueue& lqueue, EmlmType x);
//队头出
void PopFront(LQueue& lqueue);
//取出对头元素
void GetEmlmFront(LQueue& lqueue);
//队列元素个数
void GetEmlmNum(LQueue& lqueue);
//是否为空
void JudgeEmpty(LQueue& lqueue);
//返回队头元素
EmlmType FrontEmlm(LQueue& lqueue);
//清空队列
void ClearLine(LQueue& lqueue);