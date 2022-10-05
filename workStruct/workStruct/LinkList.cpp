#include "LinkList.h"


//�����½ڵ�
LL1* creatNode(LL1* plist)
{
	LL1* newnode = (LL1*)malloc(sizeof(LL1));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->next = NULL;
	return newnode;
}

//��ʼ��
LL1* InitLinkList()
{
	LL1* Node = (LL1*)malloc(sizeof(LL1));
	Node->next = NULL;
	return Node;
}

//��ӡ
void printLinkList(LL1* pHead)
{
	if (pHead->next != NULL)
	{
		LL1* cur = pHead->next;
		while (cur != NULL)
		{
			printf("%d ", cur->data);
			cur = cur->next;
		}
		printf("\n");
	}
	else
	{
		printf("\n");
	}
	
}

//ͷ��
void PushFrontList(LL1* plist, EmlmType x)
{
	LL1* newnode = creatNode(plist);
	newnode->data = x;
	newnode->next = plist->next;
	plist->next = newnode;
}

//β��
void PushBackList(LL1* plist, EmlmType x)
{
	LL1* newnode = creatNode(plist);
	newnode->data = x;
	LL1* cur = plist->next;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = newnode;
	newnode->next = NULL;
}

//ͷɾ
void PopFrontList(LL1* plist)
{
	if (plist->next == NULL)
	{
		printf("������û�нڵ����ɾ��\n");
		exit(-1);
	}
	LL1* cur = plist->next;
	plist->next = cur->next;
	free(cur);
}


//βɾ
void PopBackList(LL1* plist)
{
	LL1* cur = plist->next;
	LL1* prev = plist;
	if (plist->next == NULL)
	{
		printf("û�нڵ����ɾ����\n");
		exit(-1);
	}
	while (cur->next != NULL)
	{
		prev = prev->next;
		cur = cur->next;
	}
	free(cur);
	prev->next = NULL;
}

//�̶�λ�ò���
void PushFixedList(LL1* plist, int pos, EmlmType x)
{
	if (pos <= 0)
	{
		printf("�������ȷλ�ã�\n");
		exit(-1);
	}
	LL1* newnode = creatNode(plist);
	newnode->data = x;
	LL1* cur = plist;
	for (int i = 1; i < pos; i++)
	{
		cur = cur->next;
		if (cur == NULL)
		{
			printf("�������ȷλ�ã�\n");
			exit(-1);
		}
	}
	newnode->next = cur->next;
	cur->next = newnode;
}



//�̶�λ��ɾ��
void PopFixedList(LL1* plist, int pos)
{
	if (pos <= 0)
	{
		printf("��ɾ����ȷλ�ã�\n");
		exit(-1);
	}
	else if (plist->next == NULL)
	{
		printf("�����ѿ�!\n");
		exit(-1);
	}
	LL1* cur = plist;
	LL1* tmp = NULL;
	for (int i = 1; i < pos; i++)
	{
		cur = cur -> next;
		if (cur == NULL)
		{
			printf("��ɾ����ȷλ�ã�\n");
			exit(-1);
		}
	}
	tmp = cur->next;
	cur->next = cur->next->next;
	free(tmp);
}


//ָ��Ԫ��ǰ����
void PushEmlmList(LL1* plist, EmlmType y, EmlmType x)
{
	LL1* cur = plist;
	while (cur->next->data != y)
	{
		cur = cur->next;
		if (cur->next == NULL)
		{
			printf("û��ָ��Ԫ��!\n");
			exit(-1);
		}
	}
	LL1* newnode = creatNode(plist);
	newnode->data = x;
	newnode->next = cur->next;
	cur->next = newnode;

}
//ɾ��ָ��Ԫ��
void PopEmlmList(LL1* plist, EmlmType x)
{
	LL1* cur = plist;
	while (cur->next->data != x)
	{
		cur = cur->next;
		if (cur->next == NULL)
		{
			printf("û����Ҫɾ����Ԫ�أ�\n");
			exit(-1);
		}
	}
	LL1* tmp = cur->next;
	cur->next = tmp->next;
	free(tmp);

}

//����Ԫ��λ��,�����±�
int FindEmlmList(LL1* plist, EmlmType x)
{
	int i = 1;
	LL1* cur = plist->next;
	while (cur->data != x)
	{
		cur = cur->next;
		i++;
		if (cur == NULL)
		{
			printf("û����Ҫ�ҵ�Ԫ��\n");
			exit(-1);
		}
	}
	return i;

}
//����������
int LenList(LL1* plist)
{
	int i = 0;
	LL1* cur = plist->next;
	while (cur != NULL)
	{
		cur = cur->next;
		i++;
	}
	return i;
}
//��������
void DestoryList(LL1* plist)
{
	LL1* cur = plist->next;
	while (cur != NULL)
	{
		free(plist);
		plist = cur;
		cur = cur->next;
	}
	free(plist);
}
