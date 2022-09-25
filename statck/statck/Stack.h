

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
//栈顶插入删除数据
//入栈出栈
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);

//取栈顶的数据
STDataType StackTop(ST* ps);
//获取栈中元素的个数
int StackSize(ST* ps);
//判断是否为空
bool StackEmpty(ST* ps);



