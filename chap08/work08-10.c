#include <stdio.h>

int main(void)
{
	int i, j, ch;
	int cnt[10] = {0}; //���������̏o����

	while ((ch = getchar()) != EOF)
	{
		if (ch >= '0' && ch <= '9')
		{
			cnt[ch - '0']++;
		}
	}

	puts("���������̏o����");
	for (i = 0; i < 10; i++)
	{
		printf("'%d'�F%d\n", i, cnt[i]);
	}

	puts("���������̏o���񐔂̃O���t");
	for (i = 0; i < 10; i++)
	{
		printf("'%d'�F", i);
		for (j = 0; j < cnt[i]; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}