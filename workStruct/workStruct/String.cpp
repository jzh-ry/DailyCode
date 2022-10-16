#include "StringStatic.h"


//��ӡ
void printString(SString& T)
{
	for (int i = 1; i <= T[0]; i++)
	{
		printf("%c", T[i]);
	}
	printf("\n");
}

//��char��ֵ��T
void StrAssign(SString& T, char* ch)
{
	T[0] = strlen(ch);
	for (int i = 1; i <= T[0]; i++)
	{
		T[i] = *ch;
		ch++;
	}
}

//��S��ֵ��T
void StrCopy(SString& T, SString& S)
{
	T[0] = S[0];
	for (int i = 1; i <= S[0]; i++)
	{
		T[i] = S[i];
	}

}

//���ٴ�
void DestroyString(SString& T)
{
	T[0] = 0;
}

//�жϴ��Ƿ����
bool StrEmpty(SString& T)
{
	if (T[0] == 0)
	{
		return false;
	}
	return true;
}

//�Ƚ��������Ĵ�С
int StrCompare(SString& T, SString& S)
{
	if (T[0] == 0 || S[0] == 0)
	{
		printf("�޷��Ƚ�\n");
		exit(-1);
	}
	if (T[0] > S[0])
	{
		return 1;
	}
	else if (T[0] < S[0])
	{
		return -1;
	}
	int i = 1;
	while (T[i] != 0 && S[i] != 0)
	{
		if (T[i] > S[i])
		{
			return 1;
		}
		if (T[i] < S[i])
		{
			return -1;
		}
		i++;
	}
	if (T[i] != 0)
	{
		return 1;
	}
	else if (S[i] != 0)
	{
		return -1;
	}
	return 0;
	
}

//���ش���Ԫ�صĸ���
int StrLength(SString& T)
{
	return T[0];
}

//��T��Sƴ�ӳ�һ����
void Concat(SString& S1, SString T, SString S)
{
	if (T[0] + S[0] <= MAX_SIZE)
	{
		S1[0] = T[0] + S[0];
		for (int i = 1; i <= T[0]; i++)
		{
			S1[i] = T[i];
		}
		for (int i = 1; i <= S[0]; i++)
		{
			S1[T[0] + i] = S[i];
		}
	}
	if (T[0] + S[0] > MAX_SIZE && T[0] < MAX_SIZE)
	{
		S1[0] = MAX_SIZE;
		for (int i = 1; i <= T[0]; i++)
		{
			S1[i] = T[i];
		}
		for (int i = 1; i + T[0] <= MAX_SIZE; i++)
		{
			S1[T[0] + i] = S[i];
		}
	}
	if (T[0] >= MAX_SIZE)
	{
		S1[0] = MAX_SIZE;
		for (int i = 0; i <= MAX_SIZE; i++)
		{
			S1[i] = T[i];
		}
	}

}

//��Sub���ش�S��pos���ַ��𳤶�Ϊlen���Ӵ�
void SubString(SString& Sub, SString S, int pos, int len)
{
	Sub[0] = len;
	for (int i = 1; i <= len; i++)
	{
		Sub[i] = S[i+pos-1];
	}
}





















