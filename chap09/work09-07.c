#include <stdio.h>

void put_stringn(const char s[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%s", s);
	}
}

int main(void)
{
	char str[128];
	int num;

	printf("���������͂��Ă��������F");
	scanf("%s", str);
	printf("�A�����ĕ\������񐔂���͂��Ă��������F");
	scanf("%d", &num);

	put_stringn(str, num);

	return 0;
}