#include <stdio.h>

#define NUMBER 7 //���͂��󂯕t�����

int main(void)
{
	int i;
	int x[NUMBER]; //���͂̌��ɂ���ĕϓ�

	for (i = 0; i < NUMBER; i++) //�v�f�ɒl��ǂݍ���
	{
		printf("x[%d]�@���@", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < NUMBER / 2; i++) //�v�f�̕��т𔽓]
	{
		int temp = x[i];		  //�ŏ��̒l��temp�Ɉꎞ�ۊ�
		x[i] = x[NUMBER - 1 - i]; //���͂����P����������P�����Ȃ��Ⴂ���Ȃ�
		x[NUMBER - 1 - i] = temp; //�ړ]�悪�󂢂��̂ňꎞ�ۊǂ��Ă������m��߂��Ĕ��]����
	}

	puts("���]���܂����B");
	for (i = 0; i < NUMBER; i++) //�v�f�̒l��\��
	{
		printf("x[%d]�@���@%d\n", i, x[i]);
	}

	return 0;
}