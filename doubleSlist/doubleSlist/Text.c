#include "List.h"



void TestList1()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);

	ListPrint(plist);

	ListPushFront(plist, 10);
	ListPushFront(plist, 11);
	ListPushFront(plist, 12);
	 
	ListPrint(plist);

	ListNode* pos = ListFind(plist, 12);
	if (pos != NULL)
	{
		//���Ҹ������޸�����
		pos->data *= 10;
		printf("�ҵ���,���ҽڵ��ֵ*10\n");
		//ListInsert(pos, 300);
		ListErase(pos);
	}
	else
	{
		printf("û���ҵ�\n");
	}



	

	ListPrint(plist);


}




int main()
{

	TestList1();

	return  0;
}
