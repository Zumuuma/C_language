//�����`�̖ʐς����߂�

#include <stdio.h>

int main(void)
{
	int width;	//����
	int height; //����

	puts("�����`�̖ʐς����߂܂��B");

	printf("����:");
	scanf("%d", &width);

	printf("����:");
	scanf("%d", &height);

	printf("�ʐς�%d�ł��B\a\n", width * height);

	return 0;
}