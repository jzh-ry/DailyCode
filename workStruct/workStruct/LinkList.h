#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int EmlmType;
typedef struct LinkList
{
	EmlmType data;
	struct LinkList* next;
}LL1;

//��ʼ��
LL1* InitLinkList();
//��ӡ
void printLinkList(LL1* pHead);
//ͷ��
void PushFrontList(LL1* plist, EmlmType x);
//β��
void PushBackList(LL1* plist, EmlmType x);
//ͷɾ
void PopFrontList(LL1* plist);
//βɾ
void PopBackList(LL1* plist);
//�̶�λ�ò���
void PushFixedList(LL1* plist, int pos, EmlmType x);
//�̶�λ��ɾ��
void PopFixedList(LL1* plist, int pos);
//ָ��Ԫ��ǰ����
void PushEmlmList(LL1* plist, EmlmType y, EmlmType x);
//ɾ��ָ��Ԫ��
void PopEmlmList(LL1* plist, EmlmType x);
//����Ԫ��λ��,�����±�
int FindEmlmList(LL1* plist, EmlmType x);
//����������
int LenList(LL1* plist);
//��������
void DestoryList(LL1* plist);
