//�ǂݍ��񂾐����l�̓[�����ǂ���

#include <stdio.h>

int main(void)
{
	int num;

	printf("��������͂��Ă�������:");
	scanf("%d", &num);

	if (num)
	{
		puts("���̐��̓[���ł͂���܂���B");
	}
	else
	{
		puts("���̐��̓[���ł��B");
	}

	return 0;
}

/*�ǂݍ��񂾐����l�̓[�����ǂ���(��̃R�[�h�Ɠ��쓯��)

#include <stdio.h>

int main(void)
{
	int num;

	printf("��������͂��Ă�������:");
	scanf("%d", &num);

	if (num==0)
	{
		puts("���̐��̓[���ł��B");
	}
	else
	{
		puts("���̐��̓[���ł͂���܂���B");
	}

	return 0;
}*/