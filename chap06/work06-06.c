//�x���n��A�����Ė炷�֐������

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

	puts("���͂��ꂽ�����񂾂��A�����Čx���炵�܂��B");
	printf("�����F");
	scanf("%d", &a);

	alert(a);
	printf("%d�񕪂����x�񂪖�܂���", a);

	return 0;
}