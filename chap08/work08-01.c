#include <stdio.h>

#define diff(x, y) ((x) - (y))

int main(void)
{
	double x, y;

	printf("��̒lx(��)��y(��)�̍������߂܂��B\n");
	printf("�lx�F");
	scanf("%lf", &x);
	printf("�ly�F");
	scanf("%lf", &y);
	printf("��̒lx��y�̍���%f�ł��B\n", diff(x, y));

	return 0;
}