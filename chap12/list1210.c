/*
	２点間の距離を求める
*/

#include  <math.h>
#include  <stdio.h>

#define sqr(n)	  ((n) * (n))	/* 二乗値を求める */

typedef struct {		/*=== 点 ===*/
	int	 x;				/* Ｘ座標 */
	int	 y;				/* Ｙ座標 */
} point;

/*--- 点paと点pbの距離を返す---*/
double distanceof(point pa, point pb)
{
	return (sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y)));
}

int main(void)
{
	point	p1, p2;

	printf("点１のＸ座標：");	scanf("%d", &p1.x);
	printf("　　　Ｙ座標：");	scanf("%d", &p1.y);
	printf("点２のＸ座標：");	scanf("%d", &p2.x);
	printf("　　　Ｙ座標：");	scanf("%d", &p2.y);

	printf("それらの点の間の距離は%.2fです。\n", distanceof(p1, p2));

	return (0);
}
