/*
	暗黙の初期化を確認
*/

#include  <stdio.h>

int	 fx;				/* 静的記憶域期間（０で初期化される） */

int main(void)
{
	static int	sx;		/* 静的記憶域期間（０で初期化される） */
	int			ax;		/* 自動記憶域期間（不定値で初期化される） */

	printf("ax = %d\n", ax);
	printf("sx = %d\n", sx);
	printf("fx = %d\n", fx);

	return (0);
}
