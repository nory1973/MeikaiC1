/*
	�s���~�b�h�O�p�`��\��
*/

#include <stdio.h>

int main(void)
{
	int i, j, tmp, len;

	puts("�s���~�b�h�O�p�`�����܂�");
	printf("�i���́H");
	scanf("%d", &len);
	for (i = 1; i <= len; i++) {		/* i�s�ii = 1, 2, �c , len�j */
		tmp = (i - 1) * 2 + 1;
        for (j = 1; j <= ((len - 1) * 2 + 1)/2 - ( i - 1 ) ; j++)		/* ���� */
		    putchar(' ');
        for (j = 1; j <= tmp; j++)	/*�{�� */
		    putchar('*');
        for (j = 1; j <= ((len - 1) * 2 + 1)/2 - ( i - 1 )  ; j++)		/* �E�攏*/
		    putchar(' ');
		putchar('\n');					/* ���s */
	}

	return 0;
}
