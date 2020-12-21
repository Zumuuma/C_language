#include <stdio.h>
#include <string.h>

//---strcatの実現例---
char *strcat(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1) //s1を末尾まで進める
	{
		s1++;
	}
	while (*s1++ = *s2++) //s2に'\0'が見つかるまでコピー
	{
		;
	}
	return tmp;
}

//---strncatの実現例---
char *strncat(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (*s1)
	{
		s1++;
	}
	while (n--)
	{
		if (!(*s1++ = *s2++))
		{
			break;
		}
	}
	*s1 = '\0';
	return tmp;
}