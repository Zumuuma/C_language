#include <stdio.h>

void rev_string(char s[])
{
	char tmp[128];
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		tmp[i] = s[i];
		length++;
	}

	for (i = 0; i < length; i++)
	{
		s[i] = tmp[length - 1 - i];
	}
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	rev_string(str);

	printf("������𔽓]�������ʂ�\"%s\"�ł��B\n", str);

	return 0;
}