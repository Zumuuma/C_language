#include <stdio.h>

int main(void)
{
	char s[] = "ABC";

	printf("������s��%s�ł��B\n", s);

	s[0] = '\0';

	printf("������s��%s�ł��B\n", s);

	return 0;
}