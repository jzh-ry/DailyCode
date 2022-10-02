#include "structWork.h"

//扩容方法
EmlmType* expansion(LL& plist)
{
	if (plist.size == plist.sizelist)
	{
		EmlmType* newList = (EmlmType*)realloc(plist.data, (plist.sizelist + GET_EMLM) * sizeof(EmlmType));
		if (newList == NULL)
		{
			printf("realloc creat fail");
			exit(-1);
		}
		else
		{
			plist.data = newList;
			plist.sizelist += GET_EMLM;
		}
	}
	return plist.data;
}

//初始化
void InitList(LL& plist)
{
	plist.data = NULL;
	plist.size = 0;
	plist.sizelist = 0;
}

//打印
void printList(LL& plist)
{
	
	for (int i = 0; i < plist.size; i++)
	{
		printf("%d ", plist.data[i]);
	}
	printf("\n");
}

//销毁
void destoryList(LL& plist)
{
	free(plist.data);
}

//头插
void insertFront(LL& plist, EmlmType x)
{
	
	plist.data = expansion(plist);

	for (int i = plist.size-1; i >=0; i--)
	{
		plist.data[i + 1] = plist.data[i];
	}
	plist.data[0] = x;
	plist.size++;
}

//尾插
void insertBack(LL& plist, EmlmType x)
{
	plist.data = expansion(plist);

	plist.data[plist.size] = x;
	plist.size++;
}

//头删
void popHead(LL& plist)
{
	if (plist.size == 0)
	{
		printf("顺序表已经为空\n");
		exit(-1);
	}
	for (int i = 0; i < plist.size-1; i++)
	{
		plist.data[i] = plist.data[i + 1];
	}
	plist.size--;
}

//尾删
void popBack(LL& plist)
{
	if (plist.size == 0)
	{
		printf("顺序表已经为空\n");
		exit(-1);
	}
	plist.size--;
}

//指定位置插入
void insertFixedPosition(LL& plist, EmlmType i, EmlmType x)
{
	if (i<0 || i>plist.size)
	{
		printf("请插入正确的位置");
		exit(-1);
	}
	
	plist.data = expansion(plist);
	for (int j = plist.size - 1; j >= i; j--)
	{
		plist.data[j + 1] = plist.data[j];
	}
	plist.data[i] = x;
	plist.size++;
}

//指定位置删除
void popFixedPosition(LL& plist, EmlmType i)
{
	if (i<0 || i>=plist.size)
	{
		printf("请删除正确位置\n");
		exit(-1);
	}
	for (int j = i; j < plist.size; j++)
	{
		plist.data[j] = plist.data[j + 1];
	}
	plist.size--;
}

//查找指定元素位置，返回下标
int findFixded(LL& plist,EmlmType x)
{
	for (int i = 0; i < plist.size; i++)
	{
		if (plist.data[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//指定元素前插入
void insertEmlmFront(LL& plist, EmlmType x, EmlmType y)
{
	for (int i = 0; i < plist.size; i++)
	{
		if (plist.data[i] == x)
		{
			for (int j = plist.size-1; j >= i; j--)
			{
				plist.data[j + 1] = plist.data[j];
			}
			plist.data[i] = y;
			break;
		}
		if (i == plist.size - 1)
		{
			printf("顺序表中没有您指定的元素\n");
			exit(-1);
		}
	}
	plist.size++;
}

//删除指定元素
void popEmlmFront(LL& plist, EmlmType x)
{
	if (plist.size==0)
	{
		printf("当前顺序表为空，无法删除\n");
		exit(-1);
	}
	for (int i = 0; i < plist.size; i++)
	{
		if (plist.data[i] == x)
		{
			for (int j = i; j < plist.size-1; j++)
			{
				plist.data[j] = plist.data[j + 1];
			}
			break;
		}
		if (i == plist.size - 1)
		{
			printf("没有您要删除的元素\n");
			exit(-1);
		}
	}
	plist.size--;
}
//判空
void listEmpty(LL& plist)
{
	if (plist.size == 0)
	{
		printf("当前顺序表为空\n");
	}
}
//元素个数
int numEmlm(LL& plist)
{
	return plist.size;
}