/*
	���ʎq�̗L���͈͂��m�F����
*/

#include <stdio.h>

int x = 75;						/* �`�F�t�@�C���L���͈� */

void print_x(void)
{
	printf("x = %d\n", x);
}

int main(void)
{
	int i;
	int x = 999;				/* �a�F�u���b�N�L���͈� */

	print_x();

	printf("x = %d\n", x);

	for (i = 0; i < 5; i++) {
		int x = i * 100;		/* �b�F�u���b�N�L���͈� */
		printf("x = %d\n", x);
	}

	printf("x = %d\n", x);

	return 0;
}
