#include <stdio.h>

char *str_chr(const char *s, int c)
{
	char *address = NULL;

	while (*s)
	{
		if (*s == 'c')
		{
			address = s; //�R���p�C�����A'='�F�قȂ� 'const' �C���q�ł��B�ƌx�������B(�����s��)
			break;
		}
		*s++;
	}
	return address;
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	printf("�ł��擪���̕���'c'�̃A�h���X��%p�ł��B(�O�Ȃ�'c'�͂Ȃ�)\n", str_chr(str, 'c'));

	return 0;
}