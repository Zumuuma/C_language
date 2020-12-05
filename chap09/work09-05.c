#include <stdio.h>

int str_char(const char s[], int c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
		{
			return i;
		}
	}
	return -1;
}

int main(void)
{
	int result;
	char str[128]; //ƒiƒ‹•¶š‚ğŠÜ‚ß‚Ä‚P‚Q‚W•¶š‚Ü‚ÅŠi”[‚Å‚«‚éB

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", str);

	result = str_char(str, 'c');

	if (result == -1)
	{
		printf("•¶šc‚ÍŠÜ‚Ü‚ê‚Ä‚È‚¢‚æ`‚ñ");
	}
	else
	{
		printf("•¶šc‚Í”z—ñstr‚Ì%d”Ô–Ú‚ÉŠÜ‚Ü‚ê‚Ä‚é‚æ`‚ñ", result);
	}

	return 0;
}