#include <stdio.h>
#include <stdlib.h>


//1、焦子豪    2021级1班     2021012411     10/14
//#define MAX_SIZE_STACK 15
//typedef struct doubleStack
//{
//	int Stack0;
//	int Stack1;
//	int num[MAX_SIZE_STACK];
//}TWS;
//
//void inistack(TWS& tws)
//{
//	tws.Stack0 = 0;
//	tws.Stack1 = MAX_SIZE_STACK-1;
//}
//
//
//void Push(TWS& tws, int i, int x)
//{
//	if (tws.Stack0 != tws.Stack1)
//	{
//		if (i == 0)
//		{
//			tws.num[tws.Stack0] = x;
//			tws.Stack0++;
//			//printf("%d\n", tws.num[tws.Stack0 - 1]);
//		}
//		else if (i == 1)
//		{
//			tws.num[tws.Stack1] = x;
//			tws.Stack1--;
//			//printf("%d\n", tws.num[tws.Stack1 + 1]);
//		}
//		else
//		{
//			printf("入栈错误\n");
//			return;
//		}
//	}
//	else
//	{
//		printf("栈已满\n");
//		return;
//	}
//
//}
//
//
//void pop(TWS& tws,int i)
//{
//	if (i == 0)
//	{
//		tws.Stack0--;
//	}
//	else if (i == 1)
//	{
//		tws.Stack1++;
//	}
//	else
//	{
//		printf("出栈错误\n");
//	}
//}
//
//
//void printfStack(TWS& tws)
//{
//	printf("Stack0为：");
//	while (tws.Stack0 > 0)
//	{
//		tws.Stack0--;
//		printf("%d ", tws.num[tws.Stack0]);
//	}
//	printf("\n");
//	printf("Stack1为：");
//	while (tws.Stack1 < MAX_SIZE_STACK - 1)
//	{
//		tws.Stack1++;
//		printf("%d ", tws.num[tws.Stack1]);
//	}
//	printf("\n");
//
//}
//
//int main(void)
//{
//	TWS tws;
//	inistack(tws);
//	Push(tws, 1, 1);
//	Push(tws, 1, 2);
//	Push(tws, 1, 3);
//	Push(tws, 1, 4);
//
//	Push(tws, 0, 10);
//	Push(tws, 0, 90);
//	Push(tws, 0, 80);
//	Push(tws, 0, 70);
//	printfStack(tws);
//	return 0;
//}


//没写完
//#define MAX_STACK 10
//typedef struct
//{
//	char* str;
//	int size;
//	int sizelen;
//}ch;
//
//typedef struct stack
//{
//	char* st;
//	int top;
//	int capacity;
//}stack;
//
////初始化线性表
//void InitCh(ch &str1)
//{
//	str1.str = NULL;
//	str1.size = 0;
//	str1.sizelen = 0;
//}
////插入字符
//void PushStr(ch& str1, char x)
//{
//	if (str1.size >= str1.sizelen)
//	{
//		str1.str = (char*)realloc(str1.str, (MAX_STACK+str1.sizelen) * sizeof(char));
//		if (str1.str != NULL)
//		{
//			str1.sizelen += MAX_STACK;
//		}
//		else
//		{
//			exit(-1);
//		}
//		
//	}
//	str1.str[str1.size] = x;
//	str1.size++;
//}
////打印字符
//void printStr(ch& str1)
//{
//	for (int i = 0; i < str1.size; i++)
//	{
//		printf("%c ", str1.str[i]);
//	}
//	printf("\n");
//}
//
//
////初始化栈
//void InitStack(stack& sk)
//{
//	sk.st = NULL;
//	sk.top = 0;
//	sk.capacity = 0;
//}
//void PushStack(stack& sk, ch& str1,int i)
//{
//	if (sk.top >= sk.capacity)
//	{
//		sk.st = (char*)realloc(sk.st, str1.sizelen * sizeof(char));
//		if (sk.st != NULL)
//		{
//			sk.capacity = str1.sizelen+1;
//		}
//		else
//		{
//			printf("174行fail\n");
//			exit(-1);
//		}
//	}
//	sk.st[sk.top] = str1.str[i];
//	sk.top++;
//}
//
//void PopStack(stack& sk)
//{
//
//	sk.top--;
//}
//
//void classify(stack& sk, ch& str1)
//{
//	int i = 0;
//	while (1)
//	{
//		if (str1.str[i] == '(' || str1.str[i] == '['|| str1.str[i] == '{')
//		{
//			PushStack(sk, str1, i);
//			i++;
//		}
//		else if (str1.str[i] + 1 == sk.st[sk.top - 1] || str1.str[i] + 2 == sk.st[sk.top - 1])
//		{
//			PopStack(sk);
//			i++;
//		}
//		/*else
//		{
//			printf("括号错误\n");
//			return;
//		}*/
//		if (str1.size==i)
//		{
//			if (sk.top == 0)
//			{
//				printf("匹配成功\n");
//				return;
//			}
//			else
//			{
//				printf("匹配失败\n");
//				return;
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	ch str;
//	InitCh(str);
//	PushStr(str,'[');
//	PushStr(str, '[');
//	PushStr(str, '[');
//	PushStr(str, ']');
//
//	printStr(str);
//
//	stack sk;
//	InitStack(sk);
//	classify(sk, str);
//
//	return 0;
//}




////2、焦子豪    2021级1班     2021012411     10/14
//#define ADD_STACK 10
//typedef struct stack
//{
//	char* data;
//	int top;
//	int capacity;
//}SK;
//
////初始化
//void InitStack(SK& stack)
//{
//	stack.data = NULL;
//	stack.top = 0;
//	stack.capacity = 0;
//}
////入栈
//void pushStack(SK& stack, int x)
//{
//	if (stack.top == stack.capacity)
//	{
//		char* newstack = (char*)realloc(stack.data, (stack.capacity + ADD_STACK) * sizeof(char));
//		if (newstack == NULL)
//		{
//			printf("realloc fail\n");
//			return;
//		}
//		stack.data = newstack;
//	}
//	stack.capacity += ADD_STACK;
//	stack.data[stack.top] = x;
//	stack.top++;
//}
//
////出栈
//void PopStack(SK& stack)
//{
//	if (stack.top == 0)
//	{
//		printf("此栈已空\n");
//	}
//	stack.top--;
//}
//
//
////括号匹配
//void Classify(SK& stack, char str[],int sz)
//{
//	if (sz % 2 == 1)
//	{
//		printf("匹配失败\n");
//		return;
//	}
//	InitStack(stack);
//	int i = 0;
//	while (1)
//	{
//		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
//		{
//			pushStack(stack, str[i]);
//			i++;
//		}
//		else if ((stack.data[stack.top-1] + 1) == str[i] || (stack.data[stack.top-1] + 2) == str[i])
//		{
//			PopStack(stack);
//			i++;
//		}
//		else
//		{
//			printf("匹配错误\n");
//			return;
//		}
//		if (i == sz)
//		{
//			if (stack.top == 0)
//			{
//				printf("匹配成功\n");
//				break;
//			}
//			else
//			{
//				printf("匹配失败\n");
//				break;
//			}
//		}
//	}
//}
//
//
//
//
//int main(void)
//{
//	SK sk;
//	char str[] = { '[','[',']',']',']',']'};
//	int sz = sizeof(str) / sizeof(str[0]);
//	Classify(sk, str, sz);
//	return 0;
//}




////3、没写完
//typedef int EmlmType;
//#define MAX_SIZE 10
//typedef struct queue
//{
//	EmlmType* base;
//	int count;
//	int capacity;
//}QUE;
//typedef struct
//{
//	int front;
//	int rear;
//}RAF;
//
////初始化
//void InitQueue(QUE& queue)
//{
//	EmlmType* newbase = (EmlmType*)realloc(queue.base, MAX_SIZE * sizeof(EmlmType));
//	if (newbase == NULL)
//	{
//		printf("realloc fail\n");
//		exit(-1);
//	}
//	queue.base = newbase;
//	queue.count = 0;
//	queue.capacity = MAX_SIZE;
//}
//
//void InitRAF(RAF& subscript)
//{
//	subscript.front = 0;
//	subscript.rear = 0;
//}
//
////入队
//void PushQueue(QUE& queue, RAF& rearFront, EmlmType x)
//{
//	if (queue.count == queue.capacity)
//	{
//		printf("栈空间已满\n");
//		return;
//	}
//	
//	queue.base[rearFront.rear] = x;
//	queue.count++;
//	rearFront.rear = (rearFront.rear +1+ MAX_SIZE) % queue.capacity;
//}
////出队
//void PopQueue(QUE& queue, RAF& rearFront)
//{
//	if (queue.count == 0)
//	{
//		printf("栈已空\n");
//		return;
//	}
//	rearFront.front = (rearFront.front + 1) % queue.capacity;
//	queue.count--;
//}
//
//
////打印
//void printfQueue(QUE& queue, RAF& rearFront)
//{
//	while (rearFront.front != rearFront.rear)
//	{
//		printf("%d ", queue.base[rearFront.front]);
//		rearFront.front = (rearFront.front + 1) % queue.capacity;
//	}
//	printf("\n");
//
//}
//
//
//int main(void)
//{
//	QUE queue;
//	RAF raf;
//	InitQueue(queue);
//	InitRAF(raf);
//
//	PushQueue(queue,raf, 12);
//
//	printfQueue(queue,raf);
//
//	return 0;
//}





//3、焦子豪    2021级1班     2021012411     10/14
typedef int EmlmType;
#define MAX_SIZE 10
typedef struct CQueue
{
	EmlmType* data;
	int front;
	int rear;
	int count;
}CQ;

void InitQueue(CQ &cQueue)
{
	EmlmType* newQueue = (EmlmType*)malloc(MAX_SIZE * sizeof(EmlmType));
	if (newQueue == NULL)
	{
		printf("realloc fail\n");
		exit(-1);
	}
	cQueue.data = newQueue;
	cQueue.front = 0;
	cQueue.rear = 0;
	cQueue.count = 0;

}

void Push(CQ& cqueue,EmlmType x)
{
	if (cqueue.count == MAX_SIZE)
	{
		printf("队列已满\n");
		return;
	}
	cqueue.data[cqueue.rear] = x;
	cqueue.rear = (cqueue.rear + 1) % MAX_SIZE;
	cqueue.count++;
}

void Pop(CQ& cqueue)
{
	if (cqueue.count == 0)
	{
		printf("队列已空\n");
		return;
	}
	cqueue.front = (cqueue.front + 1) % MAX_SIZE;
	cqueue.count--;

}

void printQueue(CQ& cqueue)
{
	int k = cqueue.front;
	for (int i = 0; i < cqueue.count; i++)
	{
		printf("%d ", cqueue.data[k]);
		k = (k + 1) % MAX_SIZE;
	}
	printf("\n");
}


int main(void)
{

	CQ cqueue;
	InitQueue(cqueue);

	Push(cqueue,10);
	Push(cqueue, 11);
	Push(cqueue, 12);
	Push(cqueue, 13);
	
	printQueue(cqueue);

	Pop(cqueue);

	printQueue(cqueue);

	return 0;
}