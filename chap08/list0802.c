/*
	�����̓��ƕ��������_���̓��i�֐��`���}�N���j
*/

#include  <stdio.h>

#define	 sqr(x)		((x)  * (x))	/* x�̓��l�����߂� */

int main(void)
{
	int		nx;
	double	dx;

	printf("��������͂��Ă��������F");
	scanf("%d",	 &nx);
	printf("���̐��̓���%d�ł��B\n", sqr(nx));

	printf("��������͂��Ă��������F");
	scanf("%lf", &dx);
	printf("���̐��̓���%f�ł��B\n", sqr(dx));

	return (0);
}
