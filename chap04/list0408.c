//“Ç‚İ‚ñ‚¾®”‚ÌŒÂ”‚¾‚¯–‚ğ˜A‘±•\¦

#include <stdio.h>

int main(void)
{
	int no;

	printf("³‚Ì®”:");
	scanf("%d", &no);

	while (no-- > 0)
	{
		putchar('*');
	}
	putchar('\n');

	return 0;
}