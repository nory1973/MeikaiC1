/*
	�����`��`��
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int num;

	puts("?�����`�����܂�");
    puts("?���i�ł���?");
	printf("?�i?:");   scanf("%d", &num);

	for (i = 1; i <= num; i++) {			/* num�s */
		for (j = 1; j <= num; j++)		/* num��'*'��\�� */
			putchar('*');
		putchar('\n');						/* ���s�@*/
	}
	return 0;
}
