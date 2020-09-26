/*
	長方形を描画
*/

#include  <stdio.h>

int main(void)
{
	int	 i, j;
	int	 width, height;

	puts("長方形を作りましょう。");
	printf("横幅：");	scanf("%d", &width);
	printf("高さ：");	scanf("%d", &height);
	
	for (i = 1; i <= height; i++) {			/* 長方形はheight行 */
		for (j = 1; j <= width; j++)		/* width個の'*'を表示 */
			putchar('*');
		putchar('\n');						/* 改行 */
	}

	return (0);
}
