/*
	�Q�_�Ԃ̋��������߂�
*/

#include  <math.h>
#include  <stdio.h>

#define sqr(n)	  ((n) * (n))	/* ���l�����߂� */

typedef struct {		/*=== �_ ===*/
	int	 x;				/* �w���W */
	int	 y;				/* �x���W */
} point;

/*--- �_pa�Ɠ_pb�̋�����Ԃ�---*/
double distanceof(point pa, point pb)
{
	return (sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y)));
}

int main(void)
{
	point	p1, p2;

	printf("�_�P�̂w���W�F");	scanf("%d", &p1.x);
	printf("�@�@�@�x���W�F");	scanf("%d", &p1.y);
	printf("�_�Q�̂w���W�F");	scanf("%d", &p2.x);
	printf("�@�@�@�x���W�F");	scanf("%d", &p2.y);

	printf("�����̓_�̊Ԃ̋�����%.2f�ł��B\n", distanceof(p1, p2));

	return (0);
}
