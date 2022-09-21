#include "SList.h"


void TestSList1()
{
	SLTNode* plist = NULL;
	//Î²²å
	SListPushBack(&plist, 10);
	SListPushBack(&plist, 22);
	SListPushBack(&plist, 33);
	SListPushBack(&plist, 44);

	SListFixedInsert(&plist, 3, 100);

	





	SListPrint(plist);
}



int main(void)
{
	TestSList1();
	return 0;
}