/*
	超能力をもったひろ子さん
*/

#include  <stdio.h>

struct gstudent {
	char   name[20];	/* 名前 */
	int    height;		/* 身長 */
	float  weight;		/* 体重 */
	long   schols;		/* 奨学金 */
};

/*--- 身長を伸ばし体重を減らしてくれるひろ子さん ---*/
void hiroko(struct gstudent *std)
{
	if ((*std).height < 180) (*std).height = 180;
	if ((*std).weight >  80) (*std).weight =  80;
}

int main(void)
{
	struct gstudent  sanaka = {"Sanaka", 175, 60.5, 70000};

	hiroko(&sanaka);

	printf("氏　名 ＝ %s\n",  sanaka.name);
	printf("身　長 ＝ %d\n",  sanaka.height);
	printf("体　重 ＝ %f\n",  sanaka.weight);
	printf("奨学金 ＝ %ld\n", sanaka.schols);

	return (0);
}
