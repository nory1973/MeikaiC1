/*
	５人の学生の点数を読み込んで60点以上の学生の一覧を表示
*/

#include  <stdio.h>

#define	 NUMBER		5		/* 人数 */

int main(void)
{
	int	 i;
	int	 snum = 0;			/* 合格者の人数 */
	int	 tensu[NUMBER];		/* NUMBER人の学生の点数 */
	int	 succs[NUMBER];		/* 合格者リスト（合格者の添字を格納） */
	
	puts("点数を入力してください。");
	for (i = 0; i < NUMBER; i++) {
		printf("%2d番：", i + 1);
		scanf("%d", &tensu[i]);
		if (tensu[i] >= 60)
			succs[snum++] = i;		/* 合格者リストに追加 */
	}

	puts(" 合格者一覧 ");
	puts("------------");
	for (i = 0; i < snum; i++)
		printf("%2d番（%3d点）\n", succs[i] + 1, tensu[succs[i]]);

	return (0);
}
