/*
	読み込んだ二つの整数値の和を求めて表示
*/

#include  <stdio.h>

int main(void)
{
	int  n1, n2, n3;
	int  wa;			/* 和 */

	puts("３つの整数を入力してください。");
	printf("整数１：");	  scanf("%d", &n1);
	printf("整数２：");	  scanf("%d", &n2);
    printf("整数３：");	  scanf("%d", &n3);

	wa = n1 + n2 + n3;								/* n1とn2の和をwaに代入 */

	printf("それらの和は%dです。\n", wa);		/* 和を表示 */

	return (0);
}
