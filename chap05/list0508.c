//�z��̑S�v�f�̕��т𔽓]����

#include <stdio.h>

int main(void)
{
	int i;
	int x[7]; //int[7]�^�̔z��

	for (i = 0; i < 7; i++) //�v�f�ɒl��ǂݍ���
	{
		printf("x[%d]�@�F�@", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) //�v�f�̕��т𔽓]
	{
		int temp = x[i];
		x[i] = x[6 - i];
		x[6 - i] = temp;
	}

	puts("���]���܂����B");
	for (i = 0; i < 7; i++) //�v�f�̒l��\��
	{
		printf("x[%d]�@���@%d\n", i, x[i]);
	}

	return 0;
}