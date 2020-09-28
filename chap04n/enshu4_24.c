/*
	ピラミッド三角形を表示
*/

#include <stdio.h>

int main(void)
{
	int i, j, tmp, max, len;

	puts("ピラミッド三角形を作ります。");
	printf("段数は？：");
	scanf("%d", &len);

    max = (len - 1) * 2 + 1;
	for (i = 1; i <= len; i++) {		/* i行（i = 1, 2, … , len） */
		tmp = (i - 1) * 2 + 1;
        for (j = 1; j <= max/2 - ( i - 1 ) ; j++)		/* 左空白 */
		    putchar(' ');
        for (j = 1; j <= tmp; j++)	/*本体 */
		    putchar('*');
        for (j = 1; j <= max/2 - ( i - 1 )  ; j++)		/* 右区拍*/
		    putchar(' ');
		putchar('\n');					/* 改行 */
	}

	return 0;
}
