/*
	�ׂ�������߂�
*/

#include  <stdio.h>

/*--- dx��no���Ԃ��i��Q�Łj ---*/
double power(double dx, int no)
{
	double	tmp = 1.0;

	while (no-- > 0)
		tmp *= dx;
	return (tmp);
}

int main(void)
{
	int		n;
	double	x;

	printf("��������͂��Ă��������F");   scanf("%lf", &x);
	printf("��������͂��Ă��������F");   scanf("%d",  &n);

	printf("%.2f��%d���%.2f�ł��B\n", x, n, power(x, n));

	return (0);
}
