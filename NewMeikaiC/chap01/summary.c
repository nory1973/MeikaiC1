/*
	�����`�̖ʐς����߂�
*/

#include <stdio.h>

int main(void)
{
	int width;		/* �����`�̉��� */
	int height;		/* �����`�̍��� */

	puts("�����`�̖ʐς����߂܂��B");

	printf("�����F");
	scanf("%d", &width);

	printf("�����F");
	scanf("%d", &height);

	/* �ʐς�\�� */
	printf("�ʐς�%d�ł��B\a\n", width * height);

	return 0;
}
