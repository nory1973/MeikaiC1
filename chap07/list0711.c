/*
	�Q�_�Ԃ̋��������߂�
*/

#include  <math.h>
#include  <stdio.h>

/*--- �_(x1,y1)�Ɠ_(x2,y2)�̋��������߂� ---*/
double dist(double x1, double y1, double x2, double y2)
{
	return (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}

int main(void)
{
	double  x1, y1;		/* �_�P */
	double  x2, y2;		/* �_�Q */

	printf("�s�_�P�t�w���W�F");	scanf("%lf", &x1);
	printf("�@�@�@�@�x���W�F");	scanf("%lf", &y1);
	printf("�s�_�Q�t�w���W�F");	scanf("%lf", &x2);
	printf("�@�@�@�@�x���W�F");	scanf("%lf", &y2);

	printf("�Q�_�Ԃ̋�����%f�ł��B\n", dist(x1, y1, x2, y2));

	return(0);
}
