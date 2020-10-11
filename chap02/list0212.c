//®”‚Æ•‚“®¬”“_”‚ğ‘®‰»‚µ‚Ä•\¦

#include <stdio.h>

int main(void)
{
	printf("[%d]\n", 123456789);
	printf("[%.4d]\n", 123);
	printf("[%10d]\n", 12);
	printf("[%05d]\n", 123);
	printf("[%-5d]\n\n", 123);

	printf("[%f]\n", 123.13);
	printf("[%.1f]\n", 123.13);
	printf("[%7.1f]\n\n", 123.13);

	return 0;
}