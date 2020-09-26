/*
	二つの整数値を読み込んで和と積を表示するプログラム
*/

#include  <stdio.h>

int main(void)
{
	int	 na, nb;

	puts("二つの整数を入力してください。");
	printf("整数Ａ：");	  scanf("%d", &na);
	printf("整数Ｂ：");	  scanf("%d", &nb);

	printf("ＡとＢの積は%d、和は%dです。\n", na * nb, na + nb);

	return (0);
}
