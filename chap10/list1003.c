//�|�C���^�ɂ���Đg�����ԐړI�ɑ��삷��

#include <stdio.h>

int main(void)
{
	int initialization = 0; //�֋X��A�������B
	int mayuyu = 156;		//�܂��i�n�Ӗ��F�j�̐g��
	int nana = 155;			//�Ȃ������i���c�ށX�j�̐g��
	int mion_1 = 150;		//�݁[����i����n�����j�̐g���i��X�����ɕύX�����j
	int mion_2 = 150;		//�݁[����i����n�����j�̐g���i�ς��Ȃ��j

	int *yuiri, *mogi, *komiharu, *yuami; //�u�䂢��[�v�Ɓu�����v�Ɓu���݂͂�v�Ɓu�䂠�݁v

	yuiri = &nana;				//yuiri��nana���w���i���c�ށX���D���j
	mogi = &mion_1;				//mogi��mion���w���i����n�������D���j
	yuami = &nana;				//yuami��nana���w���i���c�ށX�Ɛg���������j
	komiharu = &initialization; //komiharu��initialization���w���i�����ŏ�����������j

	printf("�䂢��[�i���R�ʊ�j�̍D���Ȑl�̐g���F%d\n", *yuiri);
	printf("�����i�ΖؔE�j�̍D���Ȑl�̐g���F%d\n", *mogi);

	*mogi = 162;	 //�����̐g����������Bmogi�̎w���I�u�W�F�N�g�ɂP�U�Q�����B
	*komiharu = 154; //���݂͂�i���R�Y���j�Q��I�Ikomiharu�̎w���I�u�W�F�N�g�ɂ��݂̐g���P�T�S�����B

	putchar('\n');
	printf("�܂��i�n�Ӗ��F�j  �̐g���F%d\n", mayuyu);
	printf("���݂͂�i���R�Y���j�̐g���F%d\n", *komiharu);
	printf("�䂠�݁i���{�����j  �̐g���F%d\n", *yuami);
	printf("�䂤�i���R�ʊ�j    �̐g���F%d\n", *yuiri);
	printf("�Ȃ��i���c�ށX�j    �̐g���F%d\n", nana);
	printf("�����i�ΖؔE�j      �̐g���F%d\n", *mogi);
	printf("����i����n�����j  �̐g���F%d\n", mion_2);

	return 0;
}