/*
	三つの整数値を読み込んで,
    以下３つを表示するプログラム
    1.三つの値は等しいです。
    2.二つの値が等しいです。
    3.三つの値は異なります。
*/

#include  <stdio.h>

int main(void)
{
	int	 n1, n2, n3;

	puts("3つの整数を入力してください。");
	printf("整数１：");	scanf("%d", &n1);
	printf("整数２：");	scanf("%d", &n2);
    printf("整数３：");	scanf("%d", &n3);

    if( n1 == n2 && n2 == n3 ) 
    	printf("三つの値は等しいです。\n");
    else if( n1 == n2 || n2 == n3 || n1 == n3)
        printf("二つの値が等しいです。\n");
    else
        printf("三つの値は異なります。\n");
	return (0);
}
