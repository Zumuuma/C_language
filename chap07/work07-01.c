#include <stdio.h>

#define n 3

int main(void)
{
	printf("sizeof 1 = %u\n", sizeof 1);
	printf("sizeof +1 = %u\n", sizeof + 1);
	printf("sizeof -1 = %u\n", sizeof - 1);

	printf("sizeof (unsigned)-1 = %u\n", sizeof(unsigned) - 1);
	printf("sizeof (double)-1 = %u\n", sizeof(double) - 1);
	printf("sizeof ((double)-1) = %u\n", sizeof((double)-1));

	printf("sizeof n+2 = %u\n", sizeof n + 2);
	printf("sizeof(n+2) = %u\n", sizeof(n + 2));
	printf("sizeof(n+2.0) = %u\n", sizeof(n + 2.0));

	return 0;
}