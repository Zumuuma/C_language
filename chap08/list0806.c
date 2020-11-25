//選ばれた動物の鳴き声を表示

#include <stdio.h>

enum animal
{
	Dog,
	Cat,
	Monkey,
	Invalid
};

//---犬が鳴く---
void dog(void)
{
	puts("ワンワン！！");
}

//---猫が鳴く---
void cat(void)
{
	puts("にゃんにゃん！！");
}

//---猿が鳴く---
void monkey(void)
{
	puts("キッキッ！！");
}

//---動物を選ぶ---
enum animal select(void)
{
	int tmp;

	do
	{
		printf("０・・・犬　１・・・猫　２・・・猿　３・・・終了：");
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);

	return (enum animal)tmp;
}

int main(void)
{
	enum animal selected;
	do
	{
		switch (selected = select())
		{
		case Dog:
			dog();
			break;
		case Cat:
			cat();
			break;
		case Monkey:
			monkey();
			break;
		}
	} while (selected != Invalid);

	return 0;
}