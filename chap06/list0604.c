/*
	�ׂ�������߂�
*/

#include  <stdio.h>

/*--- dx��no���Ԃ� ---*/
double power(double dx, int no)
{
	int	 i;
	double	tmp = 1.0;

	for (i = 1; i <= no; i++)
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
