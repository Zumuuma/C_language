//�T�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��

#include <stdio.h>

int main(void)
{
	int uchida;	 //���c�N�̓_��
	int satoh;	 //�����N�̓_��
	int sanaka;	 //�����N�̓_��
	int hiraki;	 //���،N�̓_��
	int masaki;	 //�^��N�̓_��
	int sum = 0; //���v�_

	printf("�T�l�̓_������͂��Ă��������B\n");
	printf("�P�ԁF");
	scanf("%d", &uchida);
	sum += uchida;
	printf("�Q�ԁF");
	scanf("%d", &satoh);
	sum += satoh;
	printf("�R�ԁF");
	scanf("%d", &sanaka);
	sum += sanaka;
	printf("�S�ԁF");
	scanf("%d", &hiraki);
	sum += hiraki;
	printf("�T�ԁF");
	scanf("%d", &masaki);
	sum += masaki;

	printf("���v�_�F%5d\n", sum);
	printf("���ϓ_�F%5.1f\n", (double)sum / 5);

	return 0;
}