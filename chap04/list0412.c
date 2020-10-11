//“Ç‚İ‚ñ‚¾®”‚ÌŒÂ”‚¾‚¯–‚ğ˜A‘±•\¦(for•¶)

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("³‚Ì®”F");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
	{
		putchar('*');
	}
	putchar('\n');

	return 0;
}