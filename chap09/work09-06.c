#include <stdio.h>

int str_chnum(const char s[], int c)
{
	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
		{
			cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	int result;
	char str[128]; //�i���������܂߂ĂP�Q�W�����܂Ŋi�[�ł���B

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	result = str_chnum(str, 'c');

	printf("����c�̌���%d�ł��B\n", result);

	return 0;
}