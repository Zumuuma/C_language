//2�_�Ԃ̋��������߂�

#include <math.h>
#include <stdio.h>

//---�_�ix1,y1�j�Ɠ_�ix2,y2�j�̋��������߂�---
double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
int main(void)
{
	double x1, y1; //�_1
	double x2, y2; //�_2

	printf("�Q�_�Ԃ̋��������߂܂��B\n");
	printf("�_�P�cX���W�F");
	scanf("%lf", &x1);
	printf("�_�P�cY���W�F");
	scanf("%lf", &y1);
	printf("�_�Q�cX���W�F");
	scanf("%lf", &x2);
	printf("�_�Q�cY���W�F");
	scanf("%lf", &y2);

	printf("������%f�ł��B\n", dist(x1, y1, x2, y2));

	return 0;
}