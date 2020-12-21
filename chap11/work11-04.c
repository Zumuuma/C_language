#include <stdio.h>

void put_string(const char *s)
{
	while (*s)//‹L‰¯ˆæ‚ğß–ñ‚·‚é— ƒƒU
	{
		printf("%c", *s);
		*s++;
	}
	putchar('\n');
}

int main(void)
{
	char str[128];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", str);

	put_string(str);

	return 0;
}