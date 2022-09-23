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

	ListFixedErase(plist, 7);

	ListPrint(plist);


}




int main()
{

	TestList1();

	return  0;
}
