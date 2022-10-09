#include "structWork.h"
#include "LinkList.h"
#include "Stack.h"
#include "Queue.h"

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

void TextStark()
{
	LS ls;
	InitLineStack(ls);
	PushLineStack(ls, 1);
	PushLineStack(ls, 2);
	PushLineStack(ls, 3);

	JudgeEmpty(ls);
	GetTopEmlm(ls);
	PopLineStack(ls);

	JudgeEmpty(ls);
	GetTopEmlm(ls);
	PopLineStack(ls);

	JudgeEmpty(ls);
	GetTopEmlm(ls);
	PopLineStack(ls);

	DestoryStack(ls);
	PushLineStack(ls, 3);
	GetTopEmlm(ls);
	

}

void TextQueue()
{
	LQueue lq;
	InitLineQueue(lq);
	InsertBack(lq, 1);
	InsertBack(lq, 2);
	InsertBack(lq, 3);
	InsertBack(lq, 4);
	InsertBack(lq, 5);
	InsertBack(lq, 6);
	JudgeEmpty(lq);

	printf("%d\n",FrontEmlm(lq));
	GetEmlmNum(lq);

	ClearLine(lq);
	GetEmlmNum(lq);
	InsertBack(lq, 4);
	InsertBack(lq, 5);
	InsertBack(lq, 6);

	printf("%d\n", FrontEmlm(lq));
	GetEmlmNum(lq);
}


int main(void)
{
	//TextlineList();

	//TextLinkList();

	//TextStark();

	TextQueue();
	return 0;
}