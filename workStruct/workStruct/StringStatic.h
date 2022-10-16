#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define MAX_SIZE 255
typedef char SString[MAX_SIZE + 1];

//��ӡ
void printString(SString& T);

//��char��ֵ��T
void StrAssign(SString& T, char* ch);
//��S��ֵ��T
void StrCopy(SString& T, SString& S);
//���ٴ�
void DestroyString(SString& T);
//�жϴ��Ƿ����
bool StrEmpty(SString& T);
//�Ƚ��������Ĵ�С
int StrCompare(SString& T, SString& S);
//���ش���Ԫ�صĸ���
int StrLength(SString& T);
//��T��Sƴ�ӳ�һ����
void Concat(SString& S1, SString T,SString S);
//��Sub���ش�S��pos���ַ��𳤶�Ϊlen���Ӵ�
void SubString(SString& Sub, SString S, int pos, int len);
