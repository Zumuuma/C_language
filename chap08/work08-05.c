#include <stdio.h>

enum personalities
{
	��������,
	�̂�т�,
	�m���P,
	Invalid
};

void impatient(void)
{
	puts("���Ȃ��͑��R�ł�����");
}

void easygoing(void)
{
	puts("���Ȃ��͒x�R�ł�������");
}

void nonke(void)
{
	puts("���Ȃ��̓m���P�ł��A�Z�[�t����������������");
}

enum personalities select()
{
	int tmp;

	do
	{
		printf("�O�E�E�E���������@�P�E�E�E�̂�т�@�Q�E�E�E�m���P�@�R�E�E�E�I��");
		scanf("%d", &tmp);
	} while (tmp < �������� || tmp > Invalid);

	return (enum personalities)tmp;
}

int main(void)
{
	enum personalities selected;

	do
	{
		switch (selected = select())
		{
		case ��������:
			impatient();
			break;
		case �̂�т�:
			easygoing();
			break;
		case �m���P:
			nonke();
			break;
		}
	} while (selected != Invalid);

	return 0;
}