#include <stdio.h>
#include <math.h>

int main(void)
{
	double square;

	printf("�����`�̖ʐς���͂��Ă��������F");
	scanf("%lf", &square);

	printf("�����`�̂P�ӂ̒�����%.2lf�ł��B", sqrt(square));

	return 0;
}