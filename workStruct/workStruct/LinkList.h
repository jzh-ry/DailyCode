#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int EmlmType;
typedef struct LinkList
{
	EmlmType data;
	struct LinkList* next;
}LL1;

//初始化
LL1* InitLinkList();
//打印
void printLinkList(LL1* pHead);
//头插
void PushFrontList(LL1* plist, EmlmType x);
//尾插
void PushBackList(LL1* plist, EmlmType x);
//头删
void PopFrontList(LL1* plist);
//尾删
void PopBackList(LL1* plist);
//固定位置插入
void PushFixedList(LL1* plist, int pos, EmlmType x);
//固定位置删除
void PopFixedList(LL1* plist, int pos);
//指定元素前插入
void PushEmlmList(LL1* plist, EmlmType y, EmlmType x);
//删除指定元素
void PopEmlmList(LL1* plist, EmlmType x);
//查找元素位置,返回下标
int FindEmlmList(LL1* plist, EmlmType x);
//返回链表长度
int LenList(LL1* plist);
//销毁链表
void DestoryList(LL1* plist);
