#include "StringStatic.h"


//打印
void printString(SString& T)
{
	for (int i = 1; i <= T[0]; i++)
	{
		printf("%c", T[i]);
	}
	printf("\n");
}

//将char赋值到T
void StrAssign(SString& T, char* ch)
{
	T[0] = strlen(ch);
	for (int i = 1; i <= T[0]; i++)
	{
		T[i] = *ch;
		ch++;
	}
}

//将S赋值到T
void StrCopy(SString& T, SString& S)
{
	T[0] = S[0];
	for (int i = 1; i <= S[0]; i++)
	{
		T[i] = S[i];
	}

}

//销毁串
void DestroyString(SString& T)
{
	T[0] = 0;
}

//判断串是否存在
bool StrEmpty(SString& T)
{
	if (T[0] == 0)
	{
		return false;
	}
	return true;
}

//比较两个串的大小
int StrCompare(SString& T, SString& S)
{
	if (T[0] == 0 || S[0] == 0)
	{
		printf("无法比较\n");
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

//返回串中元素的个数
int StrLength(SString& T)
{
	return T[0];
}

//将T和S拼接成一个串
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

//用Sub返回串S的pos个字符起长度为len的子串
void SubString(SString& Sub, SString S, int pos, int len)
{
	Sub[0] = len;
	for (int i = 1; i <= len; i++)
	{
		Sub[i] = S[i+pos-1];
	}
}





















