//�z��̑S�v�f���[���ɂ���

#include <stdio.h>

//�v�f��n�̔z��v�̗v�f�ɂO����
void set_zero(int v[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		v[i] = 0;
	}
}

//�v�f��n�̔z��v�̑S�v�f��\�����ĉ��s
void print_array(const int v[], int n)
{
	int i;

	printf("{");
	for (i = 0; i < n; i++)
	{
		printf("%d ", v[i]);
	}
	printf("}");
}

int main(void)
{
	int ary1[] = {1, 2, 3, 4, 5};
	int ary2[] = {3, 2, 1};

	printf("ary1�@���@");
	print_array(ary1, 5);
	putchar('\n');
	printf("ary2�@���@");
	print_array(ary2, 3);
	putchar('\n');

	set_zero(ary1, 5); //�z��ary1�̑S�v�f�ɂO����
	set_zero(ary2, 3); //�z��ary2�̑S�v�f�ɂO����

	printf("���z��̑S�v�f�ɂO�������܂����B\n");
	printf("ary1�@���@");
	print_array(ary1, 5);
	putchar('\n');
	printf("ary2�@���@");
	print_array(ary2, 3);
	putchar('\n');

	return 0;
}