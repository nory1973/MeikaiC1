/*
	���p�O�p�`�i���������p�j��\���i�֐��Łj
*/

#include  <stdio.h>

/*--- *��no�A���\�� ---*/
void put_stars(int no)
{
	while (no-- > 0)
		putchar('*');
}

int main(void)
{
	int	 i, ln;

	printf("���i�ł����F");
	scanf("%d", &ln);

	for (i = 1; i <= ln; i++) {
		put_stars(i);
		putchar('\n');
	}

	return (0);
}
