/*
	正方形を描画
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int num;

	puts("?長方形を作ります");
    puts("?何段ですか?");
	printf("?段?:");   scanf("%d", &num);

	for (i = 1; i <= num; i++) {			/* num行 */
		for (j = 1; j <= num; j++)		/* num個の'*'を表示 */
			putchar('*');
		putchar('\n');						/* 改行　*/
	}
	return 0;
}
