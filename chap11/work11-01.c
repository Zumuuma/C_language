#include <stdio.h>

int main(void)
{
	char *p = "123";

	printf("p = \"%s\"\n", p);

	p = "456" + 1; //�����炭�A�A�h���X�ɂP�𑫂��Ă���Ǝv����B�i�l�@�j

	printf("p = \"%s\"\n", p);

	return 0;
}