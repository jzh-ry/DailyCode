#include "SList.h"


void TestSList1()
{
	SLTNode* plist = NULL;
	//Î²²å
	SListPushBack(&plist, 10);
	SListPushBack(&plist, 22);
	SListPushBack(&plist, 33);
	SListPushBack(&plist, 44);

	printf("%d\n", FindNode(plist));

	SListFixedInsert(&plist, 5, 100);
	SListPrint(plist);

	SListFixedErase(&plist, 5);





	SListPrint(plist);
}



int main(void)
{
	TestSList1();
	return 0;
}