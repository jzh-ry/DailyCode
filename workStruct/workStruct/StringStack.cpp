#include "StringStack.h"






//��ʼ��
void InitStr(SSString& S)
{
	S.ch = (char*)malloc(MAX_SIZE_String * sizeof(char));
	S.len = 0;

}
//����T���Ƶ�S
void StrAssign1(SSString& S, char* T)
{
	
	S.len = strlen(T);
	for (int i = 0; i < S.len; i++)
	{
		S.ch[i] = T[i];
	}

}

//��ӡ
void printString(SSString& S)
{
	for (int i = 0; i < S.len; i++)
	{
		printf("%c", S.ch[i]);
	}
	printf("\n");
}
//��T���봮S��posΪλ��
void StrInsert(SSString& S, int pos, SSString T)
{
	if (S.len + T.len > MAX_SIZE_String)
	{
		char* tmp = (char*)realloc(S.ch, (S.len+MAX_SIZE_String) * sizeof(char));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			return;
		}
		S.ch = tmp;
	}
	for (int i = S.len; i >= pos-1; i--)
	{
		S.ch[i + T.len] = S.ch[i];
	}
	for (int i = 0; i < T.len; i++)
	{
		S.ch[i + pos-1] = T.ch[i];
	}
	S.len += T.len;
}

//������
void StrConcat(SSString& T, SSString S1, SSString S2)
{

	T.len = S1.len + S2.len;
	
	for (int i = 0; i < S1.len; i++)
	{
		T.ch[i] = S1.ch[i];
	}
	for (int i = 0; i < S2.len; i++)
	{
		T.ch[i + S1.len] = S2.ch[i];
	}
	
}

//����S��posλ�õ�lenλ�õ��Ӵ�,��sub����
void SubString(SSString& Sub, SSString S, int pos, int len)
{
	if (pos<0 || pos + len>S.len || len<0 || len>S.len - pos + 1)
	{
		printf("pos,len ���Ϸ�\n");
		return;
	}
	for (int i = 0; i < len; i++)
	{
		Sub.ch[i] = S.ch[i + pos - 1];
	}
	Sub.len = len;

}


