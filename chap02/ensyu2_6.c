/*
	身長から標準体重計算（小数点以下１桁）
*/

#include  <stdio.h>

int main(void)
{
	int		height;
	double	aweight, height2;			/* 平均値 */

	puts("身長を入力してください。");
	printf("身長(cm)：");	  scanf("%d", &height);

    aweight = (height-100)*0.9;

	printf("身長%4dcmの標準体重は\n", height);		/* 99999 */
	printf("%4.1fkgです\n", aweight);		/* 999.9 */

	puts("身長を入力してください。浮動小数点");
	printf("身長(cm)：");	  scanf("%lf", &height2);
    printf("身長は%6.2fcm\n", height2);		/* 99999 */

	return (0);
}