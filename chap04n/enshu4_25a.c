/*
	�t�s���~�b�h�O�p�`��\��
	�����Ŋe�i��\���i�������X�i�܂Łj
*/

#include <stdio.h>

int main(void)
{
	int i, j, tmp, len, max;

	puts("�t�i�����j�s���~�b�h�O�p�`�����܂�");
	printf("�i���́H");
	scanf("%d", &len);
	max = (len - 1) * 2 + 1;
    //printf("max2�F%d\n", tmp2);
	for (i = 1; i <= len; i++) {		/* i�s�ii = 1, 2, �c , len�j */
		tmp = (i - 1) * 2 + 1;
        for (j = 1; j <=  i - 1 ; j++)		/* ���� */
		    putchar(' ');
        for (j = 1; j <= max - 2 * ( i - 1 ); j++)	/*�{�� */
		    printf("%d",len - i + 1);
        for (j = 1; j <=  i - 1 ; j++)		/* �E�攏*/
		    putchar(' ');
		putchar('\n');					/* ���s */
	}

	return 0;
}
