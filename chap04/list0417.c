/*
	�����`��`��
*/

#include  <stdio.h>

int main(void)
{
	int	 i, j;
	int	 width, height;

	puts("�����`�����܂��傤�B");
	printf("�����F");	scanf("%d", &width);
	printf("�����F");	scanf("%d", &height);
	
	for (i = 1; i <= height; i++) {			/* �����`��height�s */
		for (j = 1; j <= width; j++)		/* width��'*'��\�� */
			putchar('*');
		putchar('\n');						/* ���s */
	}

	return (0);
}
