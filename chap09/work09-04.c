#include <stdio.h>

void null_string(char s[])
{
	s[0] = '\0';
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);
	printf("�z��str�ɓ��͂��ꂽ�������\"%s\"�ł��B\n", str);
	puts("�z��str�����������܂��B�ǂ�ȋC�������������������������������������������H�H�H�H�H�H�H�H�H�H�H�H");

	null_string(str);

	printf("�͂��A�z��str�͏��������ꂿ�Ⴂ�܂�����������������\"%s\"���ق�˂������������ł���H���܂�������", str);

	return 0;
}