//�w���̐g����ǂݍ���Ń\�[�g

#include <stdio.h>

#define NUMBER 5 //�l��

//---�o�u���\�[�g---
void bsort(int a[], int n)
{
	int i, j;

	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int i;
	int height[NUMBER]; //NUMBER�l�̊w���̐g��

	printf("%d�l�̐g������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("%2d�ԁF", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER); //�\�[�g

	puts("�����Ƀ\�[�g���܂����B");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%2d�ԁF%d\n", i + 1, height[i]);
	}

	return 0;
}