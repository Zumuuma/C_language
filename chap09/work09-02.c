#include <stdio.h>

int main(void)
{
	char s[] = "ABC";

	printf("•¶š—ñs‚Í%s‚Å‚·B\n", s);

	s[0] = '\0';

	printf("•¶š—ñs‚Í%s‚Å‚·B\n", s);

	return 0;
}