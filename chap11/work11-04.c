#include <stdio.h>

void put_string(const char *s)
{
	while (*s)//�L�����ߖ񂷂闠���U
	{
		printf("%c", *s);
		*s++;
	}
	putchar('\n');
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	put_string(str);

	return 0;
}