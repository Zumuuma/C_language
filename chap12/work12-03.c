#include <stdio.h>

struct xyz
{
	int x;
	long y;
	double z;
};

struct xyz scan_xyz(void)
{
	struct xyz input;

	printf("int�^��long�^��doubele�^�̒l����͂��Ă�������(�e�����o�ƃ����o�̋�؂�͔��p�X�y�[�X)�G");
	scanf("%d %ld %lf", &input.x, &input.y, &input.z);

	return input;
}

int main(void)
{
	struct xyz vacant;

	vacant = scan_xyz();

	printf("xyz.x = %d\n", vacant.x);
	printf("xyz.y = %ld\n", vacant.y);
	printf("xyz.z = %f\n", vacant.z);

	return 0;
}