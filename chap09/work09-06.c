#include <stdio.h>

int str_chnum(const char s[], int c)
{
	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
		{
			cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	int result;
	char str[128]; //ƒiƒ‹•¶š‚ğŠÜ‚ß‚Ä‚P‚Q‚W•¶š‚Ü‚ÅŠi”[‚Å‚«‚éB

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", str);

	result = str_chnum(str, 'c');

	printf("•¶šc‚ÌŒÂ”‚Í%dŒÂ‚Å‚·B\n", result);

	return 0;
}