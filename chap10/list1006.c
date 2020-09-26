/*
	二つの整数値を交換する（Ｃ++による参照渡し）
*/

#include  <stdio.h>

/*--- nx・nyが指すオブジェクトの値を交換 ---*/
void swap(int& nx, int& ny)
{
	int	 temp = nx;
	nx = ny;
	ny = temp;
}

int main(void)
{
	int	 na, nb;

	puts("二つの整数を入力してください。");
	printf("整数Ａ：");	  scanf("%d", &na);
	printf("整数Ｂ：");	  scanf("%d", &nb);

	swap(na, nb);

	puts("これらの値を交換しました。");
	printf("整数Ａは%dです。\n", na);
	printf("整数Ｂは%dです。\n", nb);

	return (0);
}
