#include <stdio.h>

#define NUMBER 100 //�z��̏��

int main(void)
{
	int i;
	int num;
	int numberOfData[NUMBER];

	printf("�f�[�^���F");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("%d�ԁF", i + 1);
		scanf("%d", &numberOfData[i]);
	}

	printf("{");
	for (i = 0; i < num; i++)
	{
		if (i == num - 1)
		{
			printf("%d}\n", numberOfData[num - 1]);
			break;
		}
		printf("%d, ", numberOfData[i]);
	}

	return 0;
}