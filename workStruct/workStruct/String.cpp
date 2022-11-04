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
		printf("62��\n");
		return 1;
	}
	else if (T[0] < S[0])
	{
		printf("66��\n");
		return -1;
	}

	for (int i = 1; i <= T[0]; i++)
	{
		if (T[i] > S[i])
		{
			return 1;
		}
		else if (T[i] < S[i])
		{
			return -1;
		}
		else
		{
			i++;
		}
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
		Sub[i] = S[i + pos - 1];
	}
}

//��S���ҵ�T�������Ӵ���λ��
int Index(SString& S, SString& T, int pos)
{
	if (pos<1 || pos>S[0])
	{
		printf("pos λ�ò���ȷ\n");
		return 0;
	}
	/*if (S[0] - pos < T[0]-1)
	{
		printf("pos λ�ô���\n");
		return 0;
	}*/
	int i = pos;
	SString sub;
	while (i <= (S[0] - T[0] + 1))
	{	
		SubString(sub, S, i, T[0]);
		if (StrCompare(sub, T) == 0)
		{
			printString(sub);
			return i;
		}
		else
		{
			i++;
		}
	}
	return 0;

}

//��V�滻S�г��ֵ�������T��ȵĲ��ص����Ӵ�

//void Replace(SString& S, SString& T, SString V)
//{
//	int pos = 1;
//	while (pos <= S[0] - T[0])
//	{
//		pos = Index(S, T, 1);
//		for (int i = 1; i <= V[0]; i++)
//		{
//			S[pos] = V[i];
//			pos++;
//		}
//		int i = pos;
//		while (i <= S[0]-(T[0]))
//		{
//
//		}
//	}
//
//
//}

//��S��pos���ַ�ǰ���봮T
void StrInsert(SString& S, int pos, SString T)
{
	for (int i = S[0]; i >= pos; i--)
	{
		S[i + T[0]] = S[i];
	}
	for (int i = 1; i <= T[0]; i++)
	{
		S[i+pos-1] = T[i];
	}
	S[0] += T[0];
}

//ɾ��S��pos���ַ��𣬳���Ϊlen���Ӵ�
void StrDelete(SString& S, int pos, int len)
{
	for (int i = pos; i <= S[0]-len; i++)
	{
		S[i] = S[i + len];
	}
	S[0] -= len;
}

//��մ�
void ClearString(SString& S)
{
	S[0] = 0;
}
















