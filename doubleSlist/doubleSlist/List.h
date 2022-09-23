#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}ListNode;

//��ӡ
void ListPrint(ListNode* pHead);
//��ʼ��
ListNode* ListInit();
//����
void ListDestory(ListNode* pHead);
//β��
void ListPushBack(ListNode* pHead,LTDataType x);
//ͷ��
void ListPushFront(ListNode* pHead, LTDataType x);
//ͷɾ
void ListPopFront(ListNode* pHead);
//βɾ
void ListPopBack(ListNode* pHead);
//����
ListNode* ListFind(ListNode* pHead, LTDataType x);
//��posλ��ǰ����x
void ListInsert(ListNode* pos, LTDataType x);
//ɾ��posλ�õ�Ԫ��
void ListErase(ListNode* pos);
//��pos�±�ǰ����Ԫ��
void ListFixedInsert(ListNode* pHead, int pos, int x);
//ɾ��pos�±��Ԫ��
void ListFixedErase(ListNode* pHead, int pos);





