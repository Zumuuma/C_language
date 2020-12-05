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

	printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", str);

	del_digit(str);

	printf("“ü—Í‚µ‚½•¶Žš—ñ‚©‚ç”Žš•¶Žš‚ðíœ‚·‚é‚Æ%s‚Å‚·B\n", str);
}