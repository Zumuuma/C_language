//�ÓI�L������Ԃ����I�u�W�F�N�g�̈Öق̏��������m�F

#include <stdio.h>

int fx; //�O�ŏ����������

int main(void)
{
	static int si;	  //�O�ŏ����������
	static double sd; //�O.�O�ŏ����������
	static int sa[5]; //�S�v�f���O�ŏ����������

	printf("fx�@���@%d\n", fx);
	printf("si�@���@%d\n", si);
	printf("sd�@���@%f\n", sd);

	for (int i = 0; i < 5; i++)
	{
		printf("sa[%d]�@���@%d\n", i, sa[i]);
	}

	return 0;
}