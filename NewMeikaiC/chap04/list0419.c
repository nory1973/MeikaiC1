/*
	�E�������p�̒��p�񓙕ӎO�p�`��\��
*/

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("�E�����p�񓙕ӎO�p�`�����܂��B");
	printf("�Z�ӁF");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {		/* i�s�ii = 1, 2, �c , len�j */
		for (j = 1; j <= len - i; j++)	/* �e�s��len - i��' '��\�� */
			putchar(' ');
		for (j = 1; j <= i; j++)		/* �e�s��i��'*'��\�� */
			putchar('*');
		putchar('\n');					/* ���s */
	}

	return 0;
}
