//���������̐��䂪���܂����삵�Ȃ��Bstrncpu()��strncat()��strncmp()�ȂǁB

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];
	char str1[128];
	char tmp[128];
	size_t limit = 0;

	printf("������̒��������߂܂��B���������͂��Ă��������F");
	scanf("%s", str);
	printf("������̒�����%d�ł��B\n\n", strlen(str));

	printf("�e�L�g�[�ɕ��������͂��Ă��������F");
	scanf("%s", str);
	printf("�������̂Ƃ���ɃR�s�[������������𒷂߂ɓ��͂��Ă��������F");
	scanf("%s", tmp);
	printf("�R�s�[���ꂽ���ʂ�%s�ł��B\n", strcpy(str, tmp));
	printf("�������̂Ƃ���ɃR�s�[������������͉������܂łŃ`�����H�F");
	scanf("%d", &limit);
	printf("�R�s�[���ꂽ���ʂ�%s�ł��B\n\n", strncpy(str, tmp, limit));

	printf("�������A�����܂��B�O���̕��������͂��Ă��������F");
	scanf("%s", str);
	printf("�������A�����܂��B������x�A�O���̕��������͂��Ă��������F");
	scanf("%s", str1);
	printf("�A������㔼�̕��������͂��Ă��������F");
	scanf("%s", tmp);
	printf("�������A���������ʂ�%s�ł��B\n", strcat(str, tmp));
	printf("�A������㔼�̕�����͉������܂łŃ`�����H");
	scanf("%d", &limit);
	printf("�������A���������ʂ�%s�ł��B\n\n", strncat(str, tmp, limit));

	printf("������̑召�֌W�����߂܂��B������(1)����͂��Ă��������F");
	scanf("%s", str);
	printf("��r���镶����(2)����͂��Ă��������F");
	scanf("%s", tmp);
	printf("������̑召�֌W�̌��ʂ�%d�ł��B(���������0,(1)>(2)�Ȃ琳�̐����l,(1)<(2)�Ȃ畉�̐���)\n", strcmp(str, tmp));
	printf("��r���镶����͉������܂łŃ`�����H");
	scanf("%d", &limit);
	printf("������̑召�֌W�̌��ʂ�%d�ł��B(���������0,(1)>(2)�Ȃ琳�̐����l,(1)<(2)�Ȃ畉�̐���\n\n", strncmp(str, tmp, limit));

	return 0;
}