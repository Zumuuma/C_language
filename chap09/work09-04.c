#include <stdio.h>

void null_string(char s[])
{
	s[0] = '\0';
}

int main(void)
{
	char str[128];

	printf("ΆρπόΝ΅Δ­Ύ³’F");
	scanf("%s", str);
	printf("zρstrΙόΝ³κ½ΆρΝ\"%s\"Ε·B\n", str);
	puts("zρstrπϊ»΅ά·BΗρΘCΏ’‘‘‘‘‘‘‘‘‘’‘‘‘‘‘‘‘‘HHHHHHHHHHHH");

	null_string(str);

	printf("Ν’AzρstrΝϊ»³κΏα’ά΅½\"%s\"©ΩηΛΑ¦½Ε΅εH΄ά", str);

	return 0;
}