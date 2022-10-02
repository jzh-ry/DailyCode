#pragma once
#include <stdio.h>
#include <stdlib.h>


#define GET_EMLM 10
typedef int EmlmType;
//��̬˳���ṹ��
typedef struct lineList
{
	EmlmType* data;
	int size;
	int sizelist;
}LL;


//��ʼ��
void InitList(LL& plist);
//��ӡ
void printList(LL& plist);
//����
void destoryList(LL& plist);
//ͷ��
void insertFront(LL& plist, EmlmType x);
//β��
void insertBack(LL& plist, EmlmType x);
//ͷɾ
void popHead(LL& plist);
//βɾ
void popBack(LL& plist);
//ָ��λ�ò���
void insertFixedPosition(LL& plist, EmlmType i, EmlmType x);
//ָ��λ��ɾ��
void popFixedPosition(LL& plist, EmlmType i);
//����ָ��Ԫ��λ�ã������±�
int findFixded(LL& plist, EmlmType x);
//ָ��Ԫ��ǰ����
void insertEmlmFront(LL& plist, EmlmType x, EmlmType y);
//ָ��Ԫ��ǰɾ��
void popEmlmFront(LL& plist, EmlmType x);
//�п�
void listEmpty(LL& plist);
//Ԫ�ظ���
int numEmlm(LL& plist);
