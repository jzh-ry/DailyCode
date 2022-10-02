#include "structWork.h"




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

int main(void)
{
	TextlineList();
	return 0;
}