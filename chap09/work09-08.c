#include <stdio.h>

void put_stringr(const char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		//������̍��v�����ŋ��߂ĕϐ�i�ɋL�����Ă����B
	}
	for (i = i - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	put_stringr(str);

	return 0;
}