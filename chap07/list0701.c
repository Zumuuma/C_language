//�����^�Ɛ����^�̕\���͈͂�\������

#include <stdio.h>
#include <limits.h>

int main(void)
{
	puts("�{���ł̊e�����^�E�����l�̒l�͈̔�");
	printf("char�@�@�@�@�@�@�@�@�@�@�F%d�`%d\n", CHAR_MIN, CHAR_MAX);
	printf("signed char�@�@�@�@�@�@�F%d�`%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char�@�@�@�@�@�F%d�`%d\n", 0, UCHAR_MAX);

	printf("short�@�@�@�@�@�@�@�@�@�@�F%d�`%d\n", SHRT_MIN, SHRT_MAX);
	printf("int�@�@�@�@�@�@�@�@�@�@�@�F%d�`%d\n", INT_MIN, INT_MAX);
	printf("long�@�@�@�@�@�@�@�@�@�@�@�F%ld�`%ld\n", LONG_MIN, LONG_MAX);

	printf("unsigned short�@�@�@�@�@�@�F%u�`%u\n", 0, USHRT_MAX);
	printf("unsigned�@�@�@�@�@�@�@�@�@�@�F%u�`%u\n", 0, UINT_MAX);
	printf("unsigned long             �F%lu�`%lu\n", 0, ULONG_MAX);

	return 0;
}