/*
	�����̓��ƕ��������_���̓��i�֐��j
*/

#include  <stdio.h>

/*--- int�^�����̓��l ---*/
int sqr_int(int x)
{
	return (x * x);
}

/*--- double�^���������_���̓��l ---*/
double sqr_double(double x)
{
	return (x * x);
}

int main(void)
{
	int		nx;
	double	dx;

	printf("��������͂��Ă��������F");
	scanf("%d",	 &nx);
	printf("���̐��̓���%d�ł��B\n", sqr_int(nx));

	printf("��������͂��Ă��������F");
	scanf("%lf", &dx);
	printf("���̐��̓���%f�ł��B\n", sqr_double(dx));

	return (0);
}
