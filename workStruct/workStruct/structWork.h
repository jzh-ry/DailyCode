#pragma once
#include <stdio.h>
#include <stdlib.h>


#define GET_EMLM 10
typedef int EmlmType;
//动态顺序表结构体
typedef struct lineList
{
	EmlmType* data;
	int size;
	int sizelist;
}LL;


//初始化
void InitList(LL& plist);
//打印
void printList(LL& plist);
//销毁
void destoryList(LL& plist);
//头插
void insertFront(LL& plist, EmlmType x);
//尾插
void insertBack(LL& plist, EmlmType x);
//头删
void popHead(LL& plist);
//尾删
void popBack(LL& plist);
//指定位置插入
void insertFixedPosition(LL& plist, EmlmType i, EmlmType x);
//指定位置删除
void popFixedPosition(LL& plist, EmlmType i);
//查找指定元素位置，返回下标
int findFixded(LL& plist, EmlmType x);
//指定元素前插入
void insertEmlmFront(LL& plist, EmlmType x, EmlmType y);
//指定元素前删除
void popEmlmFront(LL& plist, EmlmType x);
//判空
void listEmpty(LL& plist);
//元素个数
int numEmlm(LL& plist);
