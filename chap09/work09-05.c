#include <stdio.h>

int str_char(const char s[], int c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
		{
			return i;
		}
	}
	return -1;
}

int main(void)
{
	int result;
	char str[128]; //�i���������܂߂ĂP�Q�W�����܂Ŋi�[�ł���B

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	result = str_char(str, 'c');

	if (result == -1)
	{
		printf("����c�͊܂܂�ĂȂ���`��");
	}
	else
	{
		printf("����c�͔z��str��%d�ԖڂɊ܂܂�Ă��`��", result);
	}

	return 0;
}