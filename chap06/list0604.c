/*
	‚×‚«æ‚ğ‹‚ß‚é
*/

#include  <stdio.h>

/*--- dx‚Ìnoæ‚ğ•Ô‚· ---*/
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

	printf("À”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");   scanf("%lf", &x);
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");   scanf("%d",  &n);

	printf("%.2f‚Ì%dæ‚Í%.2f‚Å‚·B\n", x, n, power(x, n));

	return (0);
}
