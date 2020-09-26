/*
	二つの実数値を交換する（間違え）
*/

#include  <stdio.h>

/*--- nx・nyが指すオブジェクトの値を交換 ---*/
void swap(int *nx, int *ny)
{
	int	 temp = *nx;
	*nx = *ny;
	*ny = temp;
}

int main(void)
{
	double	dx, dy;

	puts("二つの実数を入力してください。");
	printf("実数Ｘ：");	  scanf("%lf", &dx);
	printf("実数Ｙ：");	  scanf("%lf", &dy);

	swap(&dx, &dy);

	puts("これらの値を交換しました。");
	printf("実数Ｘは%fです。\n", dx);
	printf("実数Ｙは%fです。\n", dy);

	return (0);
}
