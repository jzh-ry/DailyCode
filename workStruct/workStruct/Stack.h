#pragma once

#include <stdio.h>
#include <stdlib.h>


//链栈
#define ADD_CAPACITY 10
typedef int EmlmType;
typedef struct LineStark
{
	EmlmType* base;
	EmlmType* top;
	int capacity;
}LS;

//初始化
void InitLineStack(LS &lstack);
//入栈
void PushLineStack(LS& lstack, EmlmType x);
//出栈
void PopLineStack(LS& lstack);
//取栈顶元素
void GetTopEmlm(LS& lstack);
//判空
void JudgeEmpty(LS& lstack);
//销毁
void DestoryStack(LS& lstack);
