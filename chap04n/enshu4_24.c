/*
	�s���~�b�h�O�p�`��\��
*/

#include <stdio.h>

int main(void)
{
	int i, j, tmp, max, len;

	puts("�s���~�b�h�O�p�`�����܂��B");
	printf("�i���́H�F");
	scanf("%d", &len);

    max = (len - 1) * 2 + 1;
	for (i = 1; i <= len; i++) {		/* i�s�ii = 1, 2, �c , len�j */
		tmp = (i - 1) * 2 + 1;
        for (j = 1; j <= max/2 - ( i - 1 ) ; j++)		/* ���� */
		    putchar(' ');
        for (j = 1; j <= tmp; j++)	/*�{�� */
		    putchar('*');
        for (j = 1; j <= max/2 - ( i - 1 )  ; j++)		/* �E�攏*/
		    putchar(' ');
		putchar('\n');					/* ���s */
	}

	return 0;
}
