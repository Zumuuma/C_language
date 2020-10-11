#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("¶ã‘¤‚ª’¼Šp‚Æ‚È‚é“ñ“™•ÓOŠpŒ`‚ğì‚è‚Ü‚·B");
	printf("’Z•ÓF");
	scanf("%d", &len);

	for (i = 0; i < len; i++)
	{
		for (j = len; j > i; j--)
		{
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}