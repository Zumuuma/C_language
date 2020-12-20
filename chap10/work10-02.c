/*
http://newcomer.s368.xrea.com/clang/src/10/10-1.c.txt���
����y�Nm��d���́s�O�̓��t���邢�́s���̓��t�̓��t�����߂ăZ�b�g����֐�
	void yesterday(int *y, int *m, int *d) {}
	void tomorrow(int *y, int *m, int *d) {}
���쐬����i�[�N�Ȃǂ�������Ɣ��ʂ��邱�Ɓj�B
*/
/*
����
�O���S���I��ł́A���̋K���ɏ]���āA400�N��97��̉[�N���݂�����B
����N���A400�Ŋ���؂��N�̂����A10000�Ŋ���؂��N�͕��N�Ƃ���B
����N���A400�Ŋ���؂��N�̂����A4000�Ŋ���؂��N�͕��N�Ƃ���B
����N���A100�Ŋ���؂��N�̂����A400�Ŋ���؂��N�͉[�N�Ƃ���B
����N���A4�Ŋ���؂��N�͉[�N�Ƃ���B
����N���A4�Ŋ���؂��N�̂����A100�Ŋ���؂��N�͕��N�Ƃ���B
if(
(((y % 400) == 0) && (((y % 10000) != 0) || ((y % 4000) != 0))) ||
(((y % 100) == 0) && ((y % 400) == 0)) ||
(((y % 4) == 0) && ((y % 100) != 0))
)
*/

#include <stdio.h>

int err = 0; /*�G���[�t���O*/

/*�[�N���ǂ������肷��*/
int IsLeepYear(int y)
{
	return (
			   (((y % 400) == 0) && (((y % 10000) != 0) || ((y % 4000) != 0))) ||
			   (((y % 100) == 0) && ((y % 400) == 0)) ||
			   (((y % 4) == 0) && ((y % 100) != 0)))
			   ? 1
			   : 0;
}

/*����y�Nm��d���̑O�̓��̓��t�����߂ăZ�b�g����*/
void yesterday(int *y, int *m, int *d)
{
	/*�ŏI���̔z��*/
	int ld[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (IsLeepYear(*y))
		ld[1]++; /*�[�N�Ȃ�2���̍ŏI����+1����*/
	if (*d == 1)
	{
		*d = ld[(*m) - 2]; /*1���Ȃ���ɍŏI������*/
		if (--(*m) <= 0)
		{			 /*����-1����0�ȉ�����r*/
			*m = 12; /*0�ȉ��Ȃ猎��12����*/
			(*y)--;	 /*�N��-1����*/
		}
	}
	else /*���̑��͓���-1���邾��*/
		(*d)--;
}

/*����y�Nm��d���̎��̓��̓��t�����߂ăZ�b�g����*/
void tomorrow(int *y, int *m, int *d)
{
	/*�ŏI���̔z��*/
	int ld[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (IsLeepYear(*y))
		ld[1]++; /*�[�N�Ȃ�2���̍ŏI����+1����*/
	if (*d == ld[(*m) - 1])
	{
		*d = 1; /*�����ŏI���Ȃ����1��������*/
		if (++(*m) > 12)
		{			/*����+1���Č���12���傫������r*/
			*m = 1; /*�傫����Ό���1����*/
			(*y)++; /*�N��+1����*/
		}
	}
	else
		(*d)++; /*���̑��͓���+1���邾��*/
}

/*�N����͂���*/
void syear(int *y)
{
	err = 0;
	printf("�������͂��Ă�������:");
	scanf("%d", y);
	while (getchar() != '\n')
		; /*�o�b�t�@����ɂ���*/
	if (*y < 1900 || *y > 3000)
	{
		err = 1;
		puts("�����ȔN����͂��Ȃ��ł��������I");
	}
}

/*������͂���*/
void smanth(int *m)
{
	err = 0;
	printf("������͂��Ă�������:");
	scanf("%d", m);
	while (getchar() != '\n')
		; /*�o�b�t�@����ɂ���*/
	if (*m < 1 || *m > 12)
	{
		err = 1;
		puts("�����Ȍ�����͂��Ȃ��ł��������I");
	}
}

/*������͂���*/
void sday(const int *y, const int *m, int *d)
{
	/*�ŏI���̔z��*/
	int ld[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	err = 0;

	if (IsLeepYear(*y))
		ld[1]++; /*�[�N�Ȃ�2���̍ŏI����+1����*/
	printf("������͂��Ă�������:");
	scanf("%d", d);
	while (getchar() != '\n')
		; /*�o�b�t�@����ɂ���*/
	if (*d < 1 || *d > ld[*m - 1])
	{
		err = 1;
		puts("�����ȓ�����͂��Ȃ��ł��������I");
	}
}

int main(void)
{
	int y, m, d;	/*����A���A���̕ϐ�*/
	int yy, my, dy; /*�O���̕ϐ�*/
	int yt, mt, dt; /*����̕ϐ�*/

	do
	{
		syear(&y);
	} while (err);
	do
	{
		smanth(&m);
	} while (err);
	do
	{
		sday(&y, &m, &d);
	} while (err);

	yy = yt = y;
	my = mt = m;
	dy = dt = d;

	printf("%04d/%02d/%02d�̑O�̓���", y, m, d);
	yesterday(&yy, &my, &dy);
	printf("%04d/%02d/%02d�ł��B\n", yy, my, dy);
	printf("%04d/%02d/%02d�̎��̓���", y, m, d);
	tomorrow(&yt, &mt, &dt);
	printf("%04d/%02d/%02d�ł��B\n", yt, mt, dt);

	return 0;
}