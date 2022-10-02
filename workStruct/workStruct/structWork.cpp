#include "structWork.h"

//���ݷ���
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

//��ʼ��
void InitList(LL& plist)
{
	plist.data = NULL;
	plist.size = 0;
	plist.sizelist = 0;
}

//��ӡ
void printList(LL& plist)
{
	
	for (int i = 0; i < plist.size; i++)
	{
		printf("%d ", plist.data[i]);
	}
	printf("\n");
}

//����
void destoryList(LL& plist)
{
	free(plist.data);
}

//ͷ��
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

//β��
void insertBack(LL& plist, EmlmType x)
{
	plist.data = expansion(plist);

	plist.data[plist.size] = x;
	plist.size++;
}

//ͷɾ
void popHead(LL& plist)
{
	if (plist.size == 0)
	{
		printf("˳����Ѿ�Ϊ��\n");
		exit(-1);
	}
	for (int i = 0; i < plist.size-1; i++)
	{
		plist.data[i] = plist.data[i + 1];
	}
	plist.size--;
}

//βɾ
void popBack(LL& plist)
{
	if (plist.size == 0)
	{
		printf("˳����Ѿ�Ϊ��\n");
		exit(-1);
	}
	plist.size--;
}

//ָ��λ�ò���
void insertFixedPosition(LL& plist, EmlmType i, EmlmType x)
{
	if (i<0 || i>plist.size)
	{
		printf("�������ȷ��λ��");
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

//ָ��λ��ɾ��
void popFixedPosition(LL& plist, EmlmType i)
{
	if (i<0 || i>=plist.size)
	{
		printf("��ɾ����ȷλ��\n");
		exit(-1);
	}
	for (int j = i; j < plist.size; j++)
	{
		plist.data[j] = plist.data[j + 1];
	}
	plist.size--;
}

//����ָ��Ԫ��λ�ã������±�
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

//ָ��Ԫ��ǰ����
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
			printf("˳�����û����ָ����Ԫ��\n");
			exit(-1);
		}
	}
	plist.size++;
}

//ɾ��ָ��Ԫ��
void popEmlmFront(LL& plist, EmlmType x)
{
	if (plist.size==0)
	{
		printf("��ǰ˳���Ϊ�գ��޷�ɾ��\n");
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
			printf("û����Ҫɾ����Ԫ��\n");
			exit(-1);
		}
	}
	plist.size--;
}
//�п�
void listEmpty(LL& plist)
{
	if (plist.size == 0)
	{
		printf("��ǰ˳���Ϊ��\n");
	}
}
//Ԫ�ظ���
int numEmlm(LL& plist)
{
	return plist.size;
}