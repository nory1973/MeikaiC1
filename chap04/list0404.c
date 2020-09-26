/*
	‚P‚©‚ç‚T‚Ü‚Å‚Ì˜a‚ğ‹‚ß‚Ä•\¦
*/

#include  <stdio.h>

int main(void)
{
	int	 no = 1;
	int	 sum = 0;

	do {
		sum = sum + no;
		no  = no + 1;
	} while (no <= 5);

	printf("‚P‚©‚ç‚T‚Ü‚Å‚ğ‘«‚µ‚½’l‚Í%d‚Å‚·B\n", sum);

	return (0);
}
