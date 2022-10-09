#include "Stack.h"

//��ʼ��
void InitLineStack(LS& lstack)
{
	lstack.base = (EmlmType*)malloc(ADD_CAPACITY * sizeof(EmlmType));
	lstack.top = lstack.base+1;
	lstack.capacity = ADD_CAPACITY;
}
//��ջ
void PushLineStack(LS& lstack, EmlmType x)
{
	if (lstack.base == NULL)
	{
		printf("���ȳ�ʼ��ջ\n");
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
//��ջ
void PopLineStack(LS& lstack)
{
	if (lstack.top == lstack.base+1)
	{
		printf("��ǰջΪ�գ�\n");
		exit(-1);
	}
	lstack.top--;

	printf("%d\n", *lstack.top);
}

//ȡջ��Ԫ��
void GetTopEmlm(LS& lstack)
{
	printf("ջ��Ԫ��Ϊ��%d\n", *(lstack.top-1));
}

//�п�
void JudgeEmpty(LS& lstack) 
{
	if (lstack.top - 1 == lstack.base)
	{
		printf("��ǰջΪ��\n");
	}
	else
	{
		printf("��ǰջ��Ϊ��\n");
	}
}
//����ջ
void DestoryStack(LS& lstack)
{
	free(lstack.base);
	lstack.base = lstack.top = NULL;
}