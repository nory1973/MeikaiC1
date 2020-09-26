/*
	�Ԃ̈ړ��ƔR���̏���
*/

#include  <math.h>
#include  <stdio.h>

#define sqr(n)	  ((n) * (n))	

typedef struct {		/*=== �_ ===*/
	int	 x;				/* �w���W */
	int	 y;				/* �x���W */
} point;

typedef struct {		/*=== �� ===*/
	double	fuel;		/* �c��R�� */
	point	pt;			/* ���݈ʒu */
} car;

/*--- ���݈ʒu�Ǝc��R����\�� ---*/
void put_info(car c)
{
	printf("���݈ʒu�F(%d,%d)\n",	   c.pt.x, c.pt.y);
	printf("�c��R���F%.2f���b�g��\n", c.fuel);
}

/*--- �w����тx������(dx,dy)�����ړ� ---*/
int move(car *c, int dx, int dy)
{
	double  dist = sqrt(sqr(dx) + sqr(dy));			/* �ړ����� */
	if (dist > c->fuel)
		return (0);									/* �ړ��s�� */
	c->pt.x += dx;	c->pt.y += dy;	c->fuel -= dist;
	return (1);										/* �ړ����� */
}

int main(void)
{
	car  mycar = {90.0, {0.0, 0.0}};

	while (1) {
		int	 slct;
		int	 dx, dy;		/* �ړ����� */

		put_info(mycar);
		printf("�ړ����܂����yYes�c1�^No�c0�z�F");
		scanf("%d", &slct);
		if (slct != 1) break;
		printf("�w�����̈ړ������F");  scanf("%d", &dx);
		printf("�x�����̈ړ������F");  scanf("%d", &dy);

		if (!move(&mycar, dx, dy))
			puts("\a�R���s���ňړ��ł��܂���B");
	}
	return (0);
}
