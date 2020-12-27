#include <stdio.h>
#include <string.h>

#define NUMBER 5	//�w���̐l��
#define NAME_LEN 64 //���O�̕�����

//===�w����\���\����===
typedef struct
{
	char name[NAME_LEN]; //���O
	int height;			 //�g��
	float weight;		 //�̏d
	long schols;		 //���w��
} Student;

//---x�����y���w���w��������---
void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

//---�w���̔z��a�̐擪n�̗v�f��g���̏����Ƀ\�[�g---
void sort_by_height(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (a[j - 1].height > a[j].height)
			{
				swap_Student(&a[j - 1], &a[j]);
			}
		}
	}
}

//---�w���̔z��a�̐擪n�̗v�f�𖼑O�̏����Ƀ\�[�g---
void sort_by_name(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (strcmp(a[j - 1].name, a[j].name) > 0)
			{
				swap_Student(&a[j - 1], &a[j]);
			}
		}
	}
}

//---�L�[�{�[�h����̓ǂݍ���---
void input_data(Student blank[])
{
	int i;

	printf("5�l�̖��O�A�g���A�̏d�A���w������͂��Ă�������(�e�����o�ƃ����o�̋�؂�͔��p�X�y�[�X)\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d�l�ڂ̃f�[�^����͂��Ă��������F", i + 1);
		scanf("%s %d %f %ld", blank[i].name, &blank[i].height, &blank[i].weight, &blank[i].schols);
	}
	putchar('\n');
}

int main(void)
{
	int i;
	int sort_select;
	Student std[NUMBER];

	input_data(std);

	do
	{
		puts("�ǂ���̕��@�Ń\�[�g���܂����H");
		printf("�g���̏����Ƀ\�[�g�E�E�E�P/���O�̏����Ƀ\�[�g�E�E�E�Q�F");
		scanf("%d", &sort_select);
	} while (sort_select < 1 || sort_select > 2);

	for (i = 0; i < NUMBER; i++)
	{
		printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
	}

	switch (sort_select)
	{
	case 1:
		sort_by_height(std, NUMBER); //�g���̏����Ƀ\�[�g
		break;
	case 2:
		sort_by_name(std, NUMBER); //���O�̏����Ƀ\�[�g
		break;
	default:
		break;
	}

	puts("\n�g�����Ƀ\�[�g���܂����B");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
	}

	return 0;
}