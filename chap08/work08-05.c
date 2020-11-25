#include <stdio.h>

enum personalities
{
	せっかち,
	のんびり,
	ノンケ,
	Invalid
};

void impatient(void)
{
	puts("あなたは早漏ですｗｗ");
}

void easygoing(void)
{
	puts("あなたは遅漏ですｗｗｗ");
}

void nonke(void)
{
	puts("あなたはノンケです、セーフｗｗｗｗｗｗｗｗ");
}

enum personalities select()
{
	int tmp;

	do
	{
		printf("０・・・せっかち　１・・・のんびり　２・・・ノンケ　３・・・終了");
		scanf("%d", &tmp);
	} while (tmp < せっかち || tmp > Invalid);

	return (enum personalities)tmp;
}

int main(void)
{
	enum personalities selected;

	do
	{
		switch (selected = select())
		{
		case せっかち:
			impatient();
			break;
		case のんびり:
			easygoing();
			break;
		case ノンケ:
			nonke();
			break;
		}
	} while (selected != Invalid);

	return 0;
}