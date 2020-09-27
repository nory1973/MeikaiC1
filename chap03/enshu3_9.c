/*
	三つの整数値を読み込んでその最小値を表示する
*/

#include  <stdio.h>

int main(void)
{
	int	 n1, n2, n3, min1, min2;

	puts("3つの整数を入力してください。");
	printf("整数１：");	scanf("%d", &n1);
	printf("整数２：");	scanf("%d", &n2);
    printf("整数３：");	scanf("%d", &n3);

	min1 = ( n1 > n2) ? n2 : n1;
    min2 = ( min1 > n3 ) ? n3 : min1;
    //min1 = ( n1 >= n2) ? n2 : n1;
    //min2 = ( min1 >= n3 ) ? n3 : min1;

	printf("最小値は%dです。\n", min2);

	return (0);
}
