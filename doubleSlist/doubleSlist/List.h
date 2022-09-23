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

//打印
void ListPrint(ListNode* pHead);
//初始化
ListNode* ListInit();
//销毁
void ListDestory(ListNode* pHead);
//尾插
void ListPushBack(ListNode* pHead,LTDataType x);
//头插
void ListPushFront(ListNode* pHead, LTDataType x);
//头删
void ListPopFront(ListNode* pHead);
//尾删
void ListPopBack(ListNode* pHead);
//查找
ListNode* ListFind(ListNode* pHead, LTDataType x);
//在pos位置前插入x
void ListInsert(ListNode* pos, LTDataType x);
//删除pos位置的元素
void ListErase(ListNode* pos);
//在pos下标前插入元素
void ListFixedInsert(ListNode* pHead, int pos, int x);
//删除pos下标的元素
void ListFixedErase(ListNode* pHead, int pos);





