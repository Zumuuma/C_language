//�ǂݍ��񂾐����l�ɉ����ăW�����P���̎��\��

#include <stdio.h>

int main(void)
{
	int hand; //��

	do
	{
		printf("���I��ł��������y0�E�E�O�[/1�E�E�`���L/2�E�E�p�[�z:");
		scanf("%d", &hand);
	} while (hand < 0 || hand > 2);

	printf("���Ȃ���");
	switch (hand)
	{
	case 0:
		printf("�O�[");
		break;
	case 1:
		printf("�`���L");
		break;
	case 2:
		printf("�p�[");
		break;
	}
	printf("��I�т܂����B\n");

	return 0;
}