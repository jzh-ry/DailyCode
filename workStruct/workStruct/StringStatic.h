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
//��S���ҵ�T�������Ӵ���λ��
int Index(SString& S, SString& T, int pos);
//��V�滻S�г��ֵ�������T��ȵĲ��ص����Ӵ�
//void Replace(SString& S, SString T, SString V);
//��S��pos���ַ�ǰ���봮T
void StrInsert(SString& S, int pos, SString T);
//ɾ��S��pos���ַ��𣬳���Ϊlen���Ӵ�
void StrDelete(SString& S, int pos, int len);
//��մ�
void ClearString(SString& S);
