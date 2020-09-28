/*
	二つの辺の長さを読み込んで、
    横長の長方形を表示する。
    長方形を描画
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int side1, side2;
    int lside, sside;

	puts("長方形を作ります");
	printf("side1:"); scanf("%d", &side1);
	printf("side2:"); scanf("%d", &side2);

    if (side1 > side2){
        lside = side1;
        sside = side2;
    } else {
        lside = side2;
        sside = side1;
    }

	for (i = 1; i <= sside; i++) {			/* sside */
		for (j = 1; j <= lside; j++)		/* lside */
		putchar('*');
		putchar('\n');						/* 改行*/
	}
	return 0;
}