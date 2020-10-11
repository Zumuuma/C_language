#include <stdio.h>

#define NUMBER 100 //配列の上限

int main(void)
{
	int i;
	int num;
	int numberOfData[NUMBER];

	printf("データ数：");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("%d番：", i + 1);
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