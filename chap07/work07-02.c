//�Q�l�v���O����(���吻��ł͂Ȃ�)

#include <stdio.h>

int main(void)
{
	int start, judge, shift;

	printf("������͂��Ă��������B�F");
	scanf("%d", &start);

	do
	{
		printf("�E�Ƀr�b�g�V�t�g�F�P OR ���Ƀr�b�g�V�t�g�F�Q OR �I���F�R\n");
		scanf("%d", &judge);

		if (judge == 1)
		{
			printf("���r�b�g�E�ɃV�t�g���܂����H�F");
			scanf("%d", &shift);
			printf("�E��%d�r�b�g�V�t�g����ƒl�� %d �ł��B\n", shift, start >> shift);
		}
		else if (judge == 2)
		{
			printf("���r�b�g���ɃV�t�g���܂����H�F");
			scanf("%d", &shift);
			printf("����%d�r�b�g�V�t�g����ƒl�� %d �ł��B\n", shift, start << shift);
		}
		else
		{
			break;
		}
	} while (1);

	return 0;
}