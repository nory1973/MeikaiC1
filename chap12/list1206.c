/*
	超能力をもったひろ子さん（その２）
*/

#include  <stdio.h>

/*--- 学生を表す構造体 ---*/
typedef struct {
	char   name[20];	/* 名前 */
	int    height;		/* 身長 */
	float  weight;		/* 体重 */
	long   schols;		/* 奨学金 */
} student;

/*--- 身長を伸ばし体重を減らしてくれるひろ子さん ---*/
void hiroko(student *std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight >  80) std->weight =  80;
}

int main(void)
{
	student  sanaka  = {"Sanaka", 175, 60.5, 70000};

	hiroko(&sanaka);

	printf("氏　名 ＝ %s\n",  sanaka.name);
	printf("身　長 ＝ %d\n",  sanaka.height);
	printf("体　重 ＝ %f\n",  sanaka.weight);
	printf("奨学金 ＝ %ld\n", sanaka.schols);

	return (0);
}
