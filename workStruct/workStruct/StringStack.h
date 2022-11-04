#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_SIZE_String 255
typedef struct
{
	char* ch;
	int len;
}SSString;

//打印
void printString(SSString& S);
//初始化
void InitStr(SSString& S);
//将串T复制到S
void StrAssign1(SSString& S, char* T);
//将T插入串S的pos为位置
void StrInsert(SSString& S, int pos, SSString T);
//串联接
void StrConcat(SSString& T, SSString S1, SSString S2);
//求中S从pos位置到len位置的子串,用sub返回
void SubString(SSString& Sub, SSString S, int pos, int len);