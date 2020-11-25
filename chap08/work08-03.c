#include <stdio.h>

#define swap(type, a, b) z = x, x = y, y = z

int main(void)
{
	int x, y, z;

	printf("®”xF");
	scanf("%d", &x);
	printf("®”yF");
	scanf("%d", &y);

	swap(int, x, y);

	printf("x = %d, y = %d", x, y);

	return 0;
}