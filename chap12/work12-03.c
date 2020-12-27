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

	printf("int型とlong型とdoubele型の値を入力してください(各メンバとメンバの区切りは半角スペース)；");
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