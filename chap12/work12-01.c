#include <stdio.h>

#define NAME_LEN 64 //���O�̕�����

//===�w����\���\����===
struct student
{
	char name[NAME_LEN]; //���O
	int height;			 //�g��
	float weight;		 //�̏d
	long schols;		 //���w��
};

int main(void)
{
	struct student takao = {"Takao", 173, 86.2};

	printf("���@�� �� %p\n", &takao.name);
	printf("�g�@�� �� %p\n", &takao.height);
	printf("�g�@�� �� %p\n", &takao.weight);
	printf("���w�� �� %p\n", &takao.schols);

	return 0;
}