/*
	�����`��`��
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width;

	puts("�����`�����܂��B");
	printf("�����F");   scanf("%d", &height);
	printf("�����F");   scanf("%d", &width);

	for (i = 1; i <= height; i++) {			/* �����`��height�s */
		for (j = 1; j <= width; j++)		/* �e�s��width��'*'��\�� */
			putchar('*');
		putchar('\n');						/* ���s */
	}
	return 0;
}
