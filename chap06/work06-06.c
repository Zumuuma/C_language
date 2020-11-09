//警報をn回連続して鳴らす関数を作る

#include <stdio.h>

void alert(int n)
{
	while (n-- > 0)
	{
		putchar('\a');
	}
}

int main(void)
{
	int a;

	puts("入力された整数回だけ連続して警報を鳴らします。");
	printf("整数：");
	scanf("%d", &a);

	alert(a);
	printf("%d回分だけ警報が鳴りました", a);

	return 0;
}