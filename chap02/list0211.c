//�O�̐����l��ǂݍ���ō��v�l�ƕ��ϒl��\��

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum;	//���v�l
	double ave; //���ϒl

	puts("�O�̐�������͂��Ă��������B");
	printf("����a:");
	scanf("%d", &a);
	printf("����b:");
	scanf("%d", &b);
	printf("����c:"), scanf("%d", &c);

	sum = a + b + c;
	ave = (double)sum / 3; //�L���X�g

	printf("�����̍��v��%5d�ł��B\n", sum);	//99999�`���ŏo��
	printf("�����̕��ς�%5.1f�ł��B\n", ave); //999.9�`���ŏo��

	return 0;
}