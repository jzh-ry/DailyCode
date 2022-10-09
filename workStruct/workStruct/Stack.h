#pragma once

#include <stdio.h>
#include <stdlib.h>


//��ջ
#define ADD_CAPACITY 10
typedef int EmlmType;
typedef struct LineStark
{
	EmlmType* base;
	EmlmType* top;
	int capacity;
}LS;

//��ʼ��
void InitLineStack(LS &lstack);
//��ջ
void PushLineStack(LS& lstack, EmlmType x);
//��ջ
void PopLineStack(LS& lstack);
//ȡջ��Ԫ��
void GetTopEmlm(LS& lstack);
//�п�
void JudgeEmpty(LS& lstack);
//����
void DestoryStack(LS& lstack);
