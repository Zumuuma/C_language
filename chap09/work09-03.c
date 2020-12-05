#include <stdio.h>

#define NUMBER 128

int main()
{

	int i, j;
	char s[NUMBER][128];

	for (i = 0; i < NUMBER; i++)
	{
		printf("s[%d] : ", i);
		scanf("%s", s[i]);

		for (j = 0; s[i][j] != '\0'; j++)
		{
			if (s[i][j] != '$')
			{
				break;
			}
		}
		if (j == 5)
		{
			break;
		}
	}

	for (j = 0; j < i; j++)
	{
		printf("s[%d] = \"%s\"\n", j, s[j]);
	}

	return 0;
}