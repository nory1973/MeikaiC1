/*
	���p�O�p�`�i�E�������p�j��\��
*/

#include  <stdio.h>

int main(void)
{
	int	 i, j, ln;

	printf("���i�ł����F");
	scanf("%d", &ln);
	
	for (i = 1; i <= ln; i++) {				/* i�s�ii = 1, 2, �c ,ln�j */
		for (j = 1; j <= ln - i; j++)		/* ln - i��' '��\�� */
			putchar(' ');
		for (j = 1; j <= i; j++)			/* i��'*'��\�� */
			putchar('*');
		putchar('\n');						/* ���s */
	}

	return (0);
}
