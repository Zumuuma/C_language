#include <stdio.h>

int main(void)
{
	char *p = "123";

	printf("p = \"%s\"\n", p);

	p = "456" + 1; //おそらく、アドレスに１を足していると思われる。（考察）

	printf("p = \"%s\"\n", p);

	return 0;
}