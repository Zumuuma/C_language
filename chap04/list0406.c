//�ǂݍ��񂾐����l���O�܂ŃJ�E���g�_�E��(���̂Q)

#include <stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂��Ă�������:");
	scanf("%d", &no);

	while (no >= 0)
	{
		printf("%d ", no--); //no�̒l��\��������Ƀf�N�������g
	}
	printf("\n"); //���s

	return 0;
}