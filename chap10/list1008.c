//��̎����l����������i���,�|�j��j

#include <stdio.h>

//---px��py���w���I�u�W�F�N�g�̒l������---
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main(void)
{
	double da, db;

	puts("��̎�������͂��Ă��������B");
	printf("����A�F");
	scanf("%lf", &da);
	printf("����B�F");
	scanf("%lf", &db);

	swap(&da, &db);

	puts("�����̒l���������܂����B");
	printf("����A��%f�ł��B\n", da);
	printf("����B��%f�ł��B\n", db);

	return 0;
}