/*
	車の移動と燃料の消費
*/

#include  <math.h>
#include  <stdio.h>

#define sqr(n)	  ((n) * (n))	

typedef struct {		/*=== 点 ===*/
	int	 x;				/* Ｘ座標 */
	int	 y;				/* Ｙ座標 */
} point;

typedef struct {		/*=== 車 ===*/
	double	fuel;		/* 残り燃料 */
	point	pt;			/* 現在位置 */
} car;

/*--- 現在位置と残り燃料を表示 ---*/
void put_info(car c)
{
	printf("現在位置：(%d,%d)\n",	   c.pt.x, c.pt.y);
	printf("残り燃料：%.2fリットル\n", c.fuel);
}

/*--- ＸおよびＹ方向に(dx,dy)だけ移動 ---*/
int move(car *c, int dx, int dy)
{
	double  dist = sqrt(sqr(dx) + sqr(dy));			/* 移動距離 */
	if (dist > c->fuel)
		return (0);									/* 移動不可 */
	c->pt.x += dx;	c->pt.y += dy;	c->fuel -= dist;
	return (1);										/* 移動成功 */
}

int main(void)
{
	car  mycar = {90.0, {0.0, 0.0}};

	while (1) {
		int	 slct;
		int	 dx, dy;		/* 移動距離 */

		put_info(mycar);
		printf("移動しますか【Yes…1／No…0】：");
		scanf("%d", &slct);
		if (slct != 1) break;
		printf("Ｘ方向の移動距離：");  scanf("%d", &dx);
		printf("Ｙ方向の移動距離：");  scanf("%d", &dy);

		if (!move(&mycar, dx, dy))
			puts("\a燃料不足で移動できません。");
	}
	return (0);
}
