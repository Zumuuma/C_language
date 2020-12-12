//ポインタによって身長を間接的に操作する

#include <stdio.h>

int main(void)
{
	int initialization = 0; //便宜上、作ったやつ。
	int mayuyu = 156;		//まゆゆ（渡辺麻友）の身長
	int nana = 155;			//なぁちゃん（岡田奈々）の身長
	int mion_1 = 150;		//みーおん（向井地美音）の身長（後々もぎに変更される）
	int mion_2 = 150;		//みーおん（向井地美音）の身長（変わらない）

	int *yuiri, *mogi, *komiharu, *yuami; //「ゆいりー」と「もぎ」と「こみはる」と「ゆあみ」

	yuiri = &nana;				//yuiriはnanaを指す（岡田奈々が好き）
	mogi = &mion_1;				//mogiはmionを指す（向井地美音が好き）
	yuami = &nana;				//yuamiはnanaを指す（岡田奈々と身長が同じ）
	komiharu = &initialization; //komiharuはinitializationを指す（ここで初期化をする）

	printf("ゆいりー（村山彩希）の好きな人の身長：%d\n", *yuiri);
	printf("もぎ（茂木忍）の好きな人の身長：%d\n", *mogi);

	*mogi = 162;	 //もぎの身長を代入する。mogiの指すオブジェクトに１６２を代入。
	*komiharu = 154; //こみはる（込山榛香）参上！！komiharuの指すオブジェクトにこみの身長１５４を代入。

	putchar('\n');
	printf("まゆゆ（渡辺麻友）  の身長：%d\n", mayuyu);
	printf("こみはる（込山榛香）の身長：%d\n", *komiharu);
	printf("ゆあみ（湯本亜美）  の身長：%d\n", *yuami);
	printf("ゆう（村山彩希）    の身長：%d\n", *yuiri);
	printf("なぁ（岡田奈々）    の身長：%d\n", nana);
	printf("もぎ（茂木忍）      の身長：%d\n", *mogi);
	printf("おん（向井地美音）  の身長：%d\n", mion_2);

	return 0;
}