#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("���㑤�����p�ƂȂ�񓙕ӎO�p�`�����܂��B");
	printf("�Z�ӁF");
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