//�|�C���^�ɂ���Đg�����ԐړI�ɑ��삷��

#include <stdio.h>

//---�Ђ�q����i�P�W�Ocm�����̐g�����P�W�Ocm�ɐL�΂��j---
void hiroko(int *height)
{
	if (*height < 180)
	{
		*height = 180;
	}
}

int main(void)
{
	int sato = 178;	  //�����N�̐g��
	int sanaka = 175; //�����N�̐g��
	int masaki = 179; //�܂������̐g��

	hiroko(&masaki);

	printf("�����N�̐g���F%d\n", sato);
	printf("�����N�̐g���F%d\n", sanaka);
	printf("�܂������̐g���F%d\n", masaki);

	return 0;
}