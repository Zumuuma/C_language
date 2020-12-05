#include <stdio.h>

#define NUMBER 128
#define NUMBER_OF_STRING 256

void rev_strings(char s[NUMBER][NUMBER_OF_STRING], int n)
{
	int i, j, length;
	char tmp[NUMBER_OF_STRING];

	for (j = 0; j < n; j++)
	{
		length = 0;
		for (i = 0; s[j][i] != '\0'; i++)
		{
			tmp[i] = s[j][i];
			length++;
		}

		for (i = 0; i < length; i++)
		{
			s[j][i] = tmp[length - 1 - i];
		}

		printf("s[%d] = \"%s\"\n", j, s[j]);
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

	rev_strings(str, i);

	return 0;
}