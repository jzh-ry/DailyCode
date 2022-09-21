#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;

struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};

typedef struct SListNode SLTNode;
//��ӡ����
void SListPrint(SLTNode* pHead);
//β��
void SListPushBack(SLTNode** ppHead, SLTDataType x);
//ͷ��
void SListPushFront(SLTNode** ppHead, SLTDataType x);
//ͷɾ
void SListPopFront(SLTNode** ppHead);
//βɾ
void SListPopBack(SLTNode** ppHead);
void SListPopBack1(SLTNode** ppHead);
//����(���ص�ַָ��)
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//���ң�����Ԫ���±꣩
int SListFind1(SLTNode* pHead, SLTDataType x);
//��������ڵ�����
int FindNode(SLTNode* pHead);



//�̶�λ�ò���(��ַ)
void SListInsert(SLTNode** ppHead, SLTNode* pos, SLTDataType x);
//�̶�λ��ɾ������ַ��
void SListErase(SLTNode** ppHead, SLTNode* pos);
//�̶�λ�ò��루�±꣩
void SListFixedInsert(SLTNode** ppHead, int pos,int x);
//�̶�λ��ɾ�����±꣩
void SListFixedErase(SLTNode** ppHead, int pos);



