#include <stdio.h>

int str_chnum(const char *s, int c)
{
	int count = 0;

	while (*s) //�L�����ߖ񂷂闠���U
	{
		if (*s == 'c')
		{
			count++;
		}
		*s++;
	}
	return count;
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	printf("c�̌���%d�ł��B\n", str_chnum(str, 'c'));

	return 0;
}