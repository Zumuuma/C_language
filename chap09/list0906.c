//������̔z��

#include <stdio.h>

int main(void)
{
	int i;
	char cs[][6] = {"Turbo", "NANA", "DOHC"};

	for (i = 0; i < 3; i++)
	{
		printf("cs[%d] = \"%s\"\n", i, cs[i]);
	}

	return 0;
}