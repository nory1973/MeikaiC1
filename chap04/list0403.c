/*
	読み込んだ非負の整数値の桁数を求める
*/

#include  <stdio.h>

int main(void)
{
	int	 num;
	int  dig;		/* 桁数 */

	do {
		printf("非負の整数を入力してください：");
		scanf("%d", &num);
		if (num < 0)
			puts("\a負の数を入力しないでください。");
	} while (num < 0);
										/* numは0以上となっている */
	dig = 0;
	do {
		num = num / 10;					/* 右に１桁ずらす */
		dig = dig + 1;
	} while (num > 0);
	printf("その数は%d桁です。\n", dig);

	return (0);
}
