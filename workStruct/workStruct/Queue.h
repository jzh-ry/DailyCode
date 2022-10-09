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


//��ʼ��
void InitLineQueue(LQueue& lqueue);
//����
void DestoryQueue(LQueue& lqueue);
//��β��
void InsertBack(LQueue& lqueue, EmlmType x);
//��ͷ��
void PopFront(LQueue& lqueue);
//ȡ����ͷԪ��
void GetEmlmFront(LQueue& lqueue);
//����Ԫ�ظ���
void GetEmlmNum(LQueue& lqueue);
//�Ƿ�Ϊ��
void JudgeEmpty(LQueue& lqueue);
//���ض�ͷԪ��
EmlmType FrontEmlm(LQueue& lqueue);
//��ն���
void ClearLine(LQueue& lqueue);