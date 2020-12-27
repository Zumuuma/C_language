#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

//===点の座標を表す構造体===
typedef struct
{
	double x; //X座標
	double y; //Y座標
} Point;

//===自動車を表す構造体===
typedef struct
{
	Point pt;	 //現在位置
	double fuel; //残り燃料
} Car;

//---点paと点pbの距離を返す---
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

//---自動車の現在位置と残り燃料を表示---
void put_info(Car c)
{
	printf("現在位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("残り燃料：%.2fリットル\n", c.fuel);
}

//---cの指す車を目的座標destに移動---
int move(Car *c, Point dest)
{
	double d = distance_of(c->pt, dest); //移動距離
	if (d > c->fuel)					 //移動距離が燃料を超過
	{
		return 0; //移動不可
	}
	c->pt = dest; //現在位置を更新（destに移動）
	c->fuel -= d; //燃料を更新（移動距離dの分だけ減る）
	return 1;	  //移動成功
}

int main(void)
{
	Car mycar = {{0.0, 0.0}, 90.0};

	while (1)
	{
		int select;
		int input_method;
		Point dest; //目的地の座標

		put_info(mycar); //現在位置と残り燃料を表示

		printf("移動しますか【Yes．．．１/No．．．０】：");
		scanf("%d", &select);

		if (select != 1)
		{
			break;
		}

		do
		{
			puts("移動距離の入力方法を選んでください。");
			printf("移動目的地の座標を入力する・・・１/X方向とY方向の移動距離を入力する・・・2：");
			scanf("%d", &input_method);
		} while (input_method < 1 || input_method > 2);

		switch (input_method)
		{
		case 1:
			printf("目的地のX座標：");
			scanf("%lf", &dest.x);
			printf("　　　　Y座標：");
			scanf("%lf", &dest.y);

			if (!move(&mycar, dest))
			{
				puts("\a燃料不足で移動できません。");
			}
			break;
		case 2:
			printf("X方向の移動距離：");
			scanf("%lf", &dest.x);
			printf("Y方向の移動距離：");
			scanf("%lf", &dest.y);

			dest.x += mycar.pt.x; //目的地の座標がほしいから移動距離(移動座標)に現在の座標を足してあげないといけない。
			dest.y += mycar.pt.y; //現在地が{5.0,3.0}で{7.5,8.9}に移動する時、入力を受け付ける時は{2.5,5.9}が入っている。←この値に現在地{5.0,3.0}を足してやると目的地の座標が求められる。

			if (!move(&mycar, dest))
			{
				puts("\a燃料不足で移動できません。");
			}
			break;
		default:
			break;
		}
	}

	return 0;
}