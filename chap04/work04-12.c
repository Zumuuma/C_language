#include <stdio.h>

int main(void)
{
	int no, count = 0;
	do
	{
		printf("���̐�������͂��Ă��������F");
		scanf("%d", &no);
		if (no <= 0)
		{
			puts("\a���łȂ�������͂��Ȃ��ł��������B");
		}
	} while (no <= 0);

	printf("%d��", no);
	while (no > 0)
	{
		no /= 10;
		count++;
	}
	printf("%d���ł��B", count);

	return 0;
}