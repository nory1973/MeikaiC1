/*
	長方形を描画
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width;

	puts("長方形を作ります");
	printf("高さ:"); scanf("%d", &height);
	printf("横幅:"); scanf("%d", &width);

	for (i = 1; i <= height; i++) {			/* height?s */
		for (j = 1; j <= width; j++)		/* width */
			putchar('*');
		putchar('\n');						/* 改行*/
	}
	return 0;
}
