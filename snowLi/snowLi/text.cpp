#include <stdio.h>
#include <stdlib.h>

#define LIST_FIXED 10

typedef struct ListText
{
	int* data;
	int len;
	int sizeList;
}SqList;

void InitList(SqList& plist)
{
	plist.data = NULL;
	plist.len = 0;
	plist.sizeList = 0;
}

void printList(SqList& plist)
{
	for (int i = 0; i < plist.len; i++)
	{
		printf("%d ", plist.data[i]);
	}
	printf("\n");
}

void listInsertBack(SqList& plist,int x)
{
	if (plist.len == plist.sizeList)
	{
		int* newdata = (int*)realloc(plist.data,(plist.sizeList+ LIST_FIXED)* sizeof(int));
		if (newdata == NULL)
		{
			return;
		}
		else
		{
			plist.data = newdata;
		}
	}

	plist.data[plist.len] = x;
	plist.len++;

}

//先去重，再逆置
void ListReverse(SqList& plist)
{
	//去除重复的元素
	for (int i = 0; i < plist.len; i++)
	{
		int j = 0;
		if (plist.data[i] == plist.data[i + 1])
		{
			for (j = i; j < plist.len; j++)
			{
				plist.data[j] = plist.data[j + 1];
			}
			i--;
			plist.len--;
		}
	}
	//逆置
	int i = 0;
	int j = plist.len-1;
	while (i < j)
	{
		int tmp = plist.data[j];
		plist.data[j] = plist.data[i];
		plist.data[i] = tmp;
		i++;
		j--;
	}


}

//创建数组，先存，再倒着取
void ListReverse1(SqList& plist)
{
	//先取出来
	int arr[] = { 0 };
	int j = 0;
	for (int i = 0; i < plist.len; i++)
	{
		if (plist.data[i] != plist.data[i + 1])
		{
			arr[j] = plist.data[i];
			j++;
		}
		else
		{
			i++;
		}
	}
	plist.len = j + 1;
	//然后再放进去
	for (int i = 0; i < plist.len; i++)
	{
		plist.data[i] = arr[j];
		j--;
	}

}

int main()
{
	SqList LL;

	InitList(LL);

	listInsertBack(LL, 6);
	listInsertBack(LL, 5);
	listInsertBack(LL, 4);
	listInsertBack(LL, 4);
	listInsertBack(LL, 4);

	listInsertBack(LL, 3);
	listInsertBack(LL, 2);
	listInsertBack(LL, 1);
	printList(LL);


	ListReverse(LL);

	printList(LL);

	return 0;
}