

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>
typedef int STDataType;

typedef struct strack
{
	STDataType* a;
	int top;
	int capacity;

}ST;

void StackInit(ST* ps);
void StackDestory(ST* ps);
//ջ������ɾ������
//��ջ��ջ
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);

//ȡջ��������
STDataType StackTop(ST* ps);
//��ȡջ��Ԫ�صĸ���
int StackSize(ST* ps);
//�ж��Ƿ�Ϊ��
bool StackEmpty(ST* ps);



