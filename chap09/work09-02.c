#include <stdio.h>

int main(void)
{
	char s[] = "ABC";

	printf("文字列sは%sです。\n", s);

	s[0] = '\0';

	printf("文字列sは%sです。\n", s);

	return 0;
}