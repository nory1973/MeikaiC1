/*
	学生を表す構造体で表した佐中君を初期化
*/

#include  <stdio.h>

struct gstudent {
	char   name[20];	/* 名前 */
	int    height;		/* 身長 */
	float  weight;		/* 体重 */
	long   schols;		/* 奨学金 */
};

int main(void)
{
	struct gstudent  sanaka  = {"Sanaka", 175, 60.5};

	printf("氏　名 ＝ %s\n",  sanaka.name);
	printf("身　長 ＝ %d\n",  sanaka.height);
	printf("体　重 ＝ %f\n",  sanaka.weight);
	printf("奨学金 ＝ %ld\n", sanaka.schols);

	return (0);
}
