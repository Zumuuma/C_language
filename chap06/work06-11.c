#include <stdio.h>

#define NUMBER 7

int search_idx(const int v[], int idx[], int key, int n)
{
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (v[i] == key)
		{
			idx[i] = i;
			count++;
		}
	}

	return count;
}

int main(void)
{
	int key;
	int idx[] = {0};
	int vx[NUMBER];

	for (int i = 0; i < NUMBER; i++)
	{
		printf("vx[%d]�F", i);
		scanf("%d", &vx[i]);
	}

	printf("key�̒l�F");
	scanf("%d", &key);

	printf("key�Ɠ������S�v�f�̓Y����%d�ł��B\n", search_idx(vx, idx, key, NUMBER));

	return 0;
}