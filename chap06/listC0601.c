//n�s�R��̂Q�����z��̑S�\���v�f�ɓ���l����

#include <stdio.h>

//---int[3]�^��v�f�^�Ƃ���v�f��n�̔z��m(n�s�R��̂Q�����z��)�̑S�\���v�f��v����---
void fill(int m[][3], int n, int v)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			m[i][j] = v;
		}
	}
}

//---int[3]�^��v�f�^�Ƃ���v�f��n�̔z��m(n�s�R��̂Q�����z��)�̑S�\���v�f�̒l��\��---
void mat_print(const int m[][3], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", m[i][j]);
		}
		putchar('\n');
	}
}

int main()
{
	int no;
	int x[2][3] = {0}; //�Q�s�R��F�v�f�^��int[3]�^�ŗv�f���͂Q
	int y[4][3] = {0}; //�S�s�R��F�v�f�^��int[3]�^�ŗv�f���͂S

	printf("�S�\���v�f�ɑ������l�F");
	scanf("%d", &no);

	fill(x, 2, no); //x�̑S�\���v�f��no����
	fill(y, 4, no); //y�̑S�\���v�f��no����

	printf("--- x ---\n");
	mat_print(x, 2);
	printf("--- y ---\n");
	mat_print(y, 4);

	return 0;
}