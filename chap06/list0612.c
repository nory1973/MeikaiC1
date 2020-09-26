/*
	配列の全要素を０にする
*/

#include  <stdio.h>

/*--- 要素数noの配列vcの要素に０を代入 ---*/
void int_set(int vc[], int no)
{
	int  i;

	for (i = 0; i < no; i++)
		vc[i] = 0;
}

int main(void)
{
	int	 i;
	int	 ary1[] = {1, 2, 3, 4, 5};
	int	 ary2[] = {3, 2, 1};

	int_set(ary1, 5);			/* 配列ary1の全要素に０を代入 */
	int_set(ary2, 3);			/* 配列ary2の全要素に０を代入 */

	for (i = 0; i < 5; i++)	printf("ary1[%d] = %d\n", i, ary1[i]);
	for (i = 0; i < 3; i++)	printf("ary2[%d] = %d\n", i, ary2[i]);

	return (0);
}
