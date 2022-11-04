#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define MAX_SIZE 255
typedef char SString[MAX_SIZE + 1];

//打印
void printString(SString& T);

//将char赋值到T
void StrAssign(SString& T, char* ch);
//将S赋值到T
void StrCopy(SString& T, SString& S);
//销毁串
void DestroyString(SString& T);
//判断串是否存在
bool StrEmpty(SString& T);
//比较两个串的大小
int StrCompare(SString& T, SString& S);
//返回串中元素的个数
int StrLength(SString& T);
//将T和S拼接成一个串
void Concat(SString& S1, SString T,SString S);
//用Sub返回串S的pos个字符起长度为len的子串
void SubString(SString& Sub, SString S, int pos, int len);
//从S中找到T，返回子串的位置
int Index(SString& S, SString& T, int pos);
//用V替换S中出现的所有与T相等的不重叠的子串
//void Replace(SString& S, SString T, SString V);
//在S的pos个字符前插入串T
void StrInsert(SString& S, int pos, SString T);
//删除S中pos个字符起，长度为len的子串
void StrDelete(SString& S, int pos, int len);
//清空串
void ClearString(SString& S);
