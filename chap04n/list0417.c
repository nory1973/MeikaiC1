/*
	�����`��`��
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width;

	puts("?�����`�����܂�");
	printf("?����");   scanf("%d", &height);
	printf("����");   scanf("%d", &width);

	for (i = 1; i <= height; i++) {			/* height�s */
		for (j = 1; j <= width; j++)		/* width��'*'��\�� */
			putchar('*');
		putchar('\n');						/* ���s�@*/
	}
	return 0;
}
