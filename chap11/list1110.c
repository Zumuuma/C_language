#include <stdio.h>
#include <string.h>

//---strcat�̎�����---
char *strcat(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1) //s1�𖖔��܂Ői�߂�
	{
		s1++;
	}
	while (*s1++ = *s2++) //s2��'\0'��������܂ŃR�s�[
	{
		;
	}
	return tmp;
}

//---strncat�̎�����---
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