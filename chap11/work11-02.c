#include <stdio.h>

int main(void)
{
	int i;
	int count = 0;
	char a[][5] = {"LISP", "C", "Ada"};
	char *p[] = {"PAUL", "X", "MAC", "OMMC", "OMANKO", "SEX"};

	for (i = 0; a[i][0] != '\0'; i++)
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		printf("a[%d] = \"%s\"\n", i, a[i]);
	}

	count = 0;

	for (i = 0; p[i] != '\0'; i++)
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		printf("p[%d] = \"%s\"\n", i, p[i]);
	}

	return 0;
}