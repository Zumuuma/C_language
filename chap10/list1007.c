//��̐����������ɕ��ׂ�

#include <stdio.h>

//---px��py���w���I�u�W�F�N�g�̒l������---
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

//---*n1��*n2�ƂȂ�悤�ɕ��ׂ�---
void sort2(int *n1, int *n2)
{
	if (*n1 > *n2)
	{
		swap(n1, n2);
	}
}

int main(void)
{
	int na, nb;

	puts("��̐�������͂��Ă��������B");
	printf("����A�F");
	scanf("%d", &na);
	printf("����B�F");
	scanf("%d", &nb);

	sort2(&na, &nb);

	puts("�����Ƀ\�[�g���܂����B");
	printf("����A��%d�ł��B\n", na);
	printf("����B��%d�ł��B\n", nb);

	return 0;
}