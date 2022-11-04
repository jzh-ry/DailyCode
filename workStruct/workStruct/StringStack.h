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

//��ӡ
void printString(SSString& S);
//��ʼ��
void InitStr(SSString& S);
//����T���Ƶ�S
void StrAssign1(SSString& S, char* T);
//��T���봮S��posΪλ��
void StrInsert(SSString& S, int pos, SSString T);
//������
void StrConcat(SSString& T, SSString S1, SSString S2);
//����S��posλ�õ�lenλ�õ��Ӵ�,��sub����
void SubString(SSString& Sub, SSString S, int pos, int len);