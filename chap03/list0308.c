//“Ç‚İ‚ñ‚¾®”’l‚ÌÅ‰ºˆÊŒ…‚Í‚T‚Å‚ ‚é‚©

#include <stdio.h>

int main(void){
	int num;

	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",&num);

	if((num % 10)==5){
		puts("Å‰ºˆÊ‚ÌŒ…‚Í‚T‚Å‚·B");
	}else{
		puts("Å‰ºˆÊ‚ÌŒ…‚Í‚T‚Å‚Í‚ ‚è‚Ü‚¹‚ñB");
	}

	return 0;
}