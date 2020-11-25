#include <stdio.h>

enum RGB
{
	Red,
	Green,
	Blue
};

int main(void)
{
	int color;

	printf("‚O`‚Q‚Ì’lF");
	scanf("%d", &color);

	printf("‚ ‚È‚½‚Í");
	switch (color)
	{
	case Red:
		printf("Ô");
		break;
	case Green:
		printf("—Î");
		break;
	case Blue:
		printf("Â");
		break;
	}
	printf("‚ğ‘I‚Ñ‚Ü‚µ‚½B\n");

	return 0;
}