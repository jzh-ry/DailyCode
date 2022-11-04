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
		printf("62行\n");
		return 1;
	}
	else if (T[0] < S[0])
	{
		printf("66行\n");
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
		Sub[i] = S[i + pos - 1];
	}
}

//从S中找到T，返回子串的位置
int Index(SString& S, SString& T, int pos)
{
	if (pos<1 || pos>S[0])
	{
		printf("pos 位置不正确\n");
		return 0;
	}
	/*if (S[0] - pos < T[0]-1)
	{
		printf("pos 位置错误\n");
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

//用V替换S中出现的所有与T相等的不重叠的子串

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

//在S的pos个字符前插入串T
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

//删除S中pos个字符起，长度为len的子串
void StrDelete(SString& S, int pos, int len)
{
	for (int i = pos; i <= S[0]-len; i++)
	{
		S[i] = S[i + len];
	}
	S[0] -= len;
}

//清空串
void ClearString(SString& S)
{
	S[0] = 0;
}
















