#include <stdio.h>
#include <ctype.h>
#include <string.h>

void del_digit(char *str)
{

	int i, j;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isalpha(*(str + i)))
		{
			for (j = i; j < strlen(str); j++) //���̕ӂ悭�킩��Ȃ��c
			{
				*(str + j) = *(str + j + 1);
			}
			i--;
		}
	}
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	del_digit(str);

	printf("���͂��������񂩂琔���������폜�����%s�ł��B\n", str);
}