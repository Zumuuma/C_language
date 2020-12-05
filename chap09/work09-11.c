#include <stdio.h>

#define NUMBER 128
#define NUMBER_OF_STRING 256

//---•¶Žš—ñ‚Ì”z—ñ‚ð•\Ž¦---
void put_strary(const char s[NUMBER][NUMBER_OF_STRING], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("s[%d] = \"%s\"\n", i, s[i]);
	}
}

int main(void)
{
	int i, j;
	char str[NUMBER][NUMBER_OF_STRING];

	for (i = 0; i < NUMBER; i++)
	{
		printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
		scanf("%s", str[i]);

		for (j = 0; str[i][j] != '\0'; j++)
		{
			if (str[i][j] != '$')
			{
				break;
			}
		}
		if (j == 5)
		{
			break;
		}
	}

	put_strary(str, i);

	return 0;
}