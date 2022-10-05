#include "structWork.h"
#include "LinkList.h"



void TextlineList()
{
	LL ll;
	InitList(ll);
	insertFront(ll, 1);
	insertFront(ll, 2);
	insertFront(ll, 3);
	insertFixedPosition(ll, 0, 100);
	printList(ll);
	printf("%d\n", numEmlm(ll));

	listEmpty(ll);

	popEmlmFront(ll, 3);

	printList(ll);
	printf("%d\n", numEmlm(ll));

}

void TextLinkList()
{
	LL1* head = InitLinkList();

	PushFrontList(head, 1);
	PushFrontList(head, 2);
	PushFrontList(head, 3);

	PushBackList(head, 4);
	PushBackList(head, 5);
	PushBackList(head, 6);
	PushBackList(head, 6);
	PushBackList(head, 6);


	printLinkList(head);
	int o = LenList(head);
	printf("%d\n", o);
	printLinkList(head);

	DestoryList(head);
}

int main(void)
{
	//TextlineList();

	TextLinkList();
	return 0;
}