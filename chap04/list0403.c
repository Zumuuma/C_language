//�����l�����X�Ɠǂݍ���ō��v�ƕ��ς�\��

#include <stdio.h>

int main(void)
{
	int sum = 0; //���v
	int cnt = 0; //�����l�̌�
	int retry;	 //�����𑱂��邩

	do
	{
		int t;

		printf("�����l����͂��Ă�������:");
		scanf("%d", &t);

		sum = sum + t; //sum��t���������l��sum�ɑ��(sum��t��������)
		cnt = cnt + 1; //cnt��1���������l��cnt�ɑ��(cnt��1��������)

		printf("�܂��H<Yes�E�E0/No�E�E9>:");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("���v��%d�ŕ��ς�%.2f�ł��B\n", sum, (double)sum / cnt);

	return 0;
}
