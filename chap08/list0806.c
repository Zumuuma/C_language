//�I�΂ꂽ�����̖�����\��

#include <stdio.h>

enum animal
{
	Dog,
	Cat,
	Monkey,
	Invalid
};

//---������---
void dog(void)
{
	puts("���������I�I");
}

//---�L����---
void cat(void)
{
	puts("�ɂ��ɂ��I�I");
}

//---������---
void monkey(void)
{
	puts("�L�b�L�b�I�I");
}

//---������I��---
enum animal select(void)
{
	int tmp;

	do
	{
		printf("�O�E�E�E���@�P�E�E�E�L�@�Q�E�E�E���@�R�E�E�E�I���F");
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