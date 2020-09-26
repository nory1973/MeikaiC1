/*
	直角三角形（右下が直角）を表示
*/

#include  <stdio.h>

int main(void)
{
	int	 i, j, ln;

	printf("何段ですか：");
	scanf("%d", &ln);
	
	for (i = 1; i <= ln; i++) {				/* i行（i = 1, 2, … ,ln） */
		for (j = 1; j <= ln - i; j++)		/* ln - i個の' 'を表示 */
			putchar(' ');
		for (j = 1; j <= i; j++)			/* i個の'*'を表示 */
			putchar('*');
		putchar('\n');						/* 改行 */
	}

	return (0);
}
