/*
	二つの整数値を読み込んで前者の値が後者の何％であるかを表示するプログラム
*/

#include  <stdio.h>

int main(void)
{
	int	 na, nb;

	puts("二つの整数を入力してください。");
	printf("整数Ａ：");	  scanf("%d", &na);
	printf("整数Ｂ：");	  scanf("%d", &nb);

	printf("ＡはＢの%d%%です。\n", (na * 100) / nb);

	return (0);
}
