//�ǂݍ��񂾐��̐����l���t���ɕ\��

#include <stdio.h>

int main(void)
{
	int no;

	do
	{
		printf("���̐�������͂��Ă��������F");
		scanf("%d", &no);
		if (no <= 0)
		{
			puts("���łȂ�������͂��Ȃ��ł��������B");
		}
	} while (no <= 0);

	//no��0���傫���Ȃ��Ă���

	printf("%d���t����ǂނ�", no);
	while (no > 0)
	{
		printf("%d", no % 10); //�ŉ��ʂ̌���\��
		no /= 10;			   //�E��1�����炷
	}
	puts("�ł��B");

	return 0;
}