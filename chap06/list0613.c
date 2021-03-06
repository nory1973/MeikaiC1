/*
	英語の点数と数学の点数の最高点を求める
*/

#include  <stdio.h>

#define  NUMBER		5

/*--- 要素数noの配列vcの最大値を返す ---*/
int max_of(const int vc[], int no)
{
	int	 i;
	int  max = vc[0];
	for (i = 1; i < no; i++)
		if (vc[i] > max)
			max = vc[i];
	return (max);
}

int main(void)
{
	int	 i;
	int	 eng[NUMBER];		/* 数学の点数 */
	int	 mat[NUMBER];		/* 英語の点数 */
	int	 max_e, max_m;		/* 最高点 */

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d] 英語：", i + 1);	  scanf("%d", &eng[i]);
		printf( "    数学：");		  scanf("%d", &mat[i]);
	}
	max_e = max_of(eng, NUMBER);	/* 英語の最高点 */
	max_m = max_of(mat, NUMBER);	/* 数学の最高点 */

	printf("英語の最高点＝%d\n", max_e);
	printf("数学の最高点＝%d\n", max_m);

	return (0);
}
