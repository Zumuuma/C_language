//�Q�̐����̂Q��l�̍������߂�

#include <stdio.h>

//--- x��2��l��Ԃ� ---
int sqr(int x)
{
	return x * x;
}

//--- x��y�̍���Ԃ� ---
int diff(int a, int b)
{
	return (a > b) ? a - b : b - a; //�傫�������珬������������
}

int main(void)
{
	int x, y;

	puts("2�̐�������͂��Ă��������B");
	printf("����x�F");
	scanf("%d", &x);
	printf("����y�F");
	scanf("%d", &y);

	printf("x��2���y��2��̍���%d�ł��B\n", diff(sqr(x), sqr(y)));

	return 0;
}