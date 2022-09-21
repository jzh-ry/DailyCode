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
//打印链表
void SListPrint(SLTNode* pHead);
//尾插
void SListPushBack(SLTNode** ppHead, SLTDataType x);
//头插
void SListPushFront(SLTNode** ppHead, SLTDataType x);
//头删
void SListPopFront(SLTNode** ppHead);
//尾删
void SListPopBack(SLTNode** ppHead);
void SListPopBack1(SLTNode** ppHead);
//查找(返回地址指针)
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//查找（返回元素下标）
int SListFind1(SLTNode* pHead, SLTDataType x);
//查找链表节点数量
int FindNode(SLTNode* pHead);



//固定位置插入(地址)
void SListInsert(SLTNode** ppHead, SLTNode* pos, SLTDataType x);
//固定位置删除（地址）
void SListErase(SLTNode** ppHead, SLTNode* pos);
//固定位置插入（下标）
void SListFixedInsert(SLTNode** ppHead, int pos,int x);
//固定位置删除（下标）
void SListFixedErase(SLTNode** ppHead, int pos);



