#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

//===�_�̍��W��\���\����===
typedef struct
{
	double x; //X���W
	double y; //Y���W
} Point;

//===�����Ԃ�\���\����===
typedef struct
{
	Point pt;	 //���݈ʒu
	double fuel; //�c��R��
} Car;

//---�_pa�Ɠ_pb�̋�����Ԃ�---
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

//---�����Ԃ̌��݈ʒu�Ǝc��R����\��---
void put_info(Car c)
{
	printf("���݈ʒu�F(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("�c��R���F%.2f���b�g��\n", c.fuel);
}

//---c�̎w���Ԃ�ړI���Wdest�Ɉړ�---
int move(Car *c, Point dest)
{
	double d = distance_of(c->pt, dest); //�ړ�����
	if (d > c->fuel)					 //�ړ��������R���𒴉�
	{
		return 0; //�ړ��s��
	}
	c->pt = dest; //���݈ʒu���X�V�idest�Ɉړ��j
	c->fuel -= d; //�R�����X�V�i�ړ�����d�̕���������j
	return 1;	  //�ړ�����
}

int main(void)
{
	Car mycar = {{0.0, 0.0}, 90.0};

	while (1)
	{
		int select;
		int input_method;
		Point dest; //�ړI�n�̍��W

		put_info(mycar); //���݈ʒu�Ǝc��R����\��

		printf("�ړ����܂����yYes�D�D�D�P/No�D�D�D�O�z�F");
		scanf("%d", &select);

		if (select != 1)
		{
			break;
		}

		do
		{
			puts("�ړ������̓��͕��@��I��ł��������B");
			printf("�ړ��ړI�n�̍��W����͂���E�E�E�P/X������Y�����̈ړ���������͂���E�E�E2�F");
			scanf("%d", &input_method);
		} while (input_method < 1 || input_method > 2);

		switch (input_method)
		{
		case 1:
			printf("�ړI�n��X���W�F");
			scanf("%lf", &dest.x);
			printf("�@�@�@�@Y���W�F");
			scanf("%lf", &dest.y);

			if (!move(&mycar, dest))
			{
				puts("\a�R���s���ňړ��ł��܂���B");
			}
			break;
		case 2:
			printf("X�����̈ړ������F");
			scanf("%lf", &dest.x);
			printf("Y�����̈ړ������F");
			scanf("%lf", &dest.y);

			dest.x += mycar.pt.x; //�ړI�n�̍��W���ق�������ړ�����(�ړ����W)�Ɍ��݂̍��W�𑫂��Ă����Ȃ��Ƃ����Ȃ��B
			dest.y += mycar.pt.y; //���ݒn��{5.0,3.0}��{7.5,8.9}�Ɉړ����鎞�A���͂��󂯕t���鎞��{2.5,5.9}�������Ă���B�����̒l�Ɍ��ݒn{5.0,3.0}�𑫂��Ă��ƖړI�n�̍��W�����߂���B

			if (!move(&mycar, dest))
			{
				puts("\a�R���s���ňړ��ł��܂���B");
			}
			break;
		default:
			break;
		}
	}

	return 0;
}