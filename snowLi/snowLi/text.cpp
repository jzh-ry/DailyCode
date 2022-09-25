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

//��ȥ�أ�������
void ListReverse(SqList& plist)
{
	//ȥ���ظ���Ԫ��
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
	//����
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

//�������飬�ȴ棬�ٵ���ȡ
void ListReverse1(SqList& plist)
{
	//��ȡ����
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
	//Ȼ���ٷŽ�ȥ
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