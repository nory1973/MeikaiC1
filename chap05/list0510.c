/*
	５人の学生の点数を読み込んで合計点と平均点を表示
*/

#include  <stdio.h>

#define	 NUMBER		5		/* 人数 */	

int main(void)
{
	int	 i;
	int	 tensu[NUMBER];		/* 学生の点数 */
	int	 sum = 0;			/* 合計点 */

	puts("点数を入力してください。");
	for (i = 0; i < NUMBER; i++) {
		printf("%2d番：", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("合計点：%5d\n", sum);
	printf("平均点：%5.1f\n", (double)sum / NUMBER);

	return (0);
}
