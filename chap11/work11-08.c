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
			for (j = i; j < strlen(str); j++) //‚±‚Ì•Ó‚æ‚­‚í‚©‚ç‚È‚¢c
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

	printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", str);

	del_digit(str);

	printf("“ü—Í‚µ‚½•¶Žš—ñ‚©‚ç”Žš•¶Žš‚ðíœ‚·‚é‚Æ%s‚Å‚·B\n", str);
}