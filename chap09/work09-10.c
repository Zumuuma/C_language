#include <ctype.h>
#include <stdio.h>

void del_digit(char s[])
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			for (j = i; s[j] != '\0'; j++)
			{
				s[j] = s[j + 1];
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