/*
	�Q�_�Ԃ̋��������߂�
*/

#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))		/* �Q��l�����߂� */

/*=== �_�̍��W��\���\���� ===*/
typedef struct  {
	double x;	/* �w���W */
	double y;	/* �x���W */
} Point;

/*--- �_pa�Ɠ_pb�̋�����Ԃ�---*/
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main(void)
{
	Point crnt, dest;

	printf("���ݒn�̂w���W�F");   scanf("%lf", &crnt.x);
	printf("�@�@�@�@�x���W�F");   scanf("%lf", &crnt.y);
	printf("�ړI�l�̂w���W�F");   scanf("%lf", &dest.x);
	printf("�@�@�@�@�x���W�F");   scanf("%lf", &dest.y);

	printf("�ړI�l�܂ł̋�����%.2f�ł��B\n", distance_of(crnt, dest));

	return 0;
}
