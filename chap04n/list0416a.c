/*
	���̕\��\���i40���傫�����ɏo���break�������s�j
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			int seki = i * j;
			if (seki > 40)
				break;
			printf("%3d", seki);
		}
		putchar('\n');				/* ���s */
	}

	return 0;
}
