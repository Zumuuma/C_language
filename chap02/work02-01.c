#include <stdio.h>

int main(void)
{
	float x, y;

	puts("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”x:");
	scanf("%f", &x);
	printf("®”y:");
	scanf("%f", &y);

	printf("x‚Ì’l‚Íy‚Ì%.0f%%‚Å‚·B\n", x / y * 100);

	return 0;
}