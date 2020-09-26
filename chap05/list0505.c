/*
	配列の各要素を先頭から順に1,2,3,4,5で初期化して表示
*/

#include  <stdio.h>

int main(void)
{
	int	 i;
	int	 vc[5] = {1, 2, 3, 4, 5};		/* 初期化 */

	for (i = 0; i < 5; i++)
		printf("vc[%d] = %d\n", i, vc[i]);

	return (0);
}
