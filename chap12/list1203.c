/*
	学生を表す構造体で表した佐中君
*/

#include  <stdio.h>
#include  <string.h>

struct gstudent {
	char   name[20];	/* 名前 */
	int    height;		/* 身長 */
	float  weight;		/* 体重 */
	long   schols;		/* 奨学金 */
};

int main(void)
{
	struct gstudent  sanaka;

	strcpy(sanaka.name, "Sanaka");	/* 名前 */
	sanaka.height = 175;			/* 身長 */
	sanaka.weight = 60.5;			/* 体重 */
	sanaka.schols = 70000;			/* 奨学金 */

	printf("氏　名 ＝ %s\n",  sanaka.name);
	printf("身　長 ＝ %d\n",  sanaka.height);
	printf("体　重 ＝ %f\n",  sanaka.weight);
	printf("奨学金 ＝ %ld\n", sanaka.schols);

	return (0);
}
