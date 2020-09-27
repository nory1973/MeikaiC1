/*
	二つの整数値を読み込んで前者が後者の何％であるかを実数で表示するプログラム
*/

#include  <stdio.h>

int main(void)
{
	int	 na, nb;

	puts("二つの整数を入力してください。");
	printf("整数Ａ：");	  scanf("%d", &na);
	printf("整数Ｂ：");	  scanf("%d", &nb);

	printf("整数Aは整数Bの%f%%です。\n", (double)( na * 100 / nb ));	/* キャスト */

	return (0);
}
