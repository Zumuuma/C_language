#include <stdio.h>

int main(void)
{
	int a, b, c, d;	   //����
	double e, f, g, h; //���������_��

	a = 6.3 + 6.2;	//���Z
	b = 12.5 - 7.4; //���Z
	c = 5.5 * 6.5;	//��Z
	d = 9.5 / 2.3;	//���Z

	e = 6.3 + 6.2;	//���Z
	f = 12.5 - 7.4; //���Z
	g = 5.5 * 6.5;	//��Z
	h = 9.5 / 2.3;	//���Z

	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
	printf("d=%d\n\n", d);

	printf("e=%f\n", e);
	printf("f=%f\n", f);
	printf("g=%f\n", g);
	printf("h=%f\n", h);

	return 0;
}