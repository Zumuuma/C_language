/*
�W�����͂Ɍ��ꂽ�s�����J�E���g����v���O�������쐬����B
*/

#include <stdio.h>

int main(void)
{
	int str, cnt = 0;

	while (1)
	{
		str = getchar();
		if (str == EOF)
			break;
		if (str == '\n')
			cnt++;
	}

	printf("���͂��ꂽ�s����%d�ł��B\n", cnt);

	return 0;
}