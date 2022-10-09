#include "Stack.h"

//初始化
void InitLineStack(LS& lstack)
{
	lstack.base = (EmlmType*)malloc(ADD_CAPACITY * sizeof(EmlmType));
	lstack.top = lstack.base+1;
	lstack.capacity = ADD_CAPACITY;
}
//入栈
void PushLineStack(LS& lstack, EmlmType x)
{
	if (lstack.base == NULL)
	{
		printf("请先初始化栈\n");
		exit(-1);
	}
	if (lstack.top - lstack.base == lstack.capacity)
	{
		lstack.base = (EmlmType*)realloc(lstack.base,(lstack.capacity + ADD_CAPACITY) * sizeof(EmlmType));
		if (lstack.base == NULL)
		{
			printf("rallo fail\n");
			exit(-1);
		}
		lstack.capacity += ADD_CAPACITY;
	}
	*lstack.top = x;
	lstack.top++;

}
//出栈
void PopLineStack(LS& lstack)
{
	if (lstack.top == lstack.base+1)
	{
		printf("当前栈为空！\n");
		exit(-1);
	}
	lstack.top--;

	printf("%d\n", *lstack.top);
}

//取栈顶元素
void GetTopEmlm(LS& lstack)
{
	printf("栈顶元素为：%d\n", *(lstack.top-1));
}

//判空
void JudgeEmpty(LS& lstack) 
{
	if (lstack.top - 1 == lstack.base)
	{
		printf("当前栈为空\n");
	}
	else
	{
		printf("当前栈不为空\n");
	}
}
//销毁栈
void DestoryStack(LS& lstack)
{
	free(lstack.base);
	lstack.base = lstack.top = NULL;
}