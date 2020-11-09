#include <stdio.h>

void put_count(void)
{
	static int count = 1;
	printf("put_countF%d‰ñ–Ú\n", count++);
}

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		put_count();
	}

	return 0;
}