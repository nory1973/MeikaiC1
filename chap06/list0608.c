/*
	���p�O�p�`�i�E�������p�j��\���i�֐��Łj
*/

#include  <stdio.h>

/*--- ����ch��no�A���\�� ---*/
void put_nchar(int ch, int no)
{
	while (no-- > 0)
		putchar(ch);
}

int main(void)
{
	int	 i, ln;

	printf("���i�ł����F");
	scanf("%d", &ln);

	for (i = 1; i <= ln; i++) {
		put_nchar(' ', ln - i);
		put_nchar('*', i);
		putchar('\n');
	}

	return (0);
}
