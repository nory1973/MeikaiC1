/*
	�������p�̒��p�񓙕ӎO�p�`��\���i�֐��Łj
*/

#include <stdio.h>

/*--- �L������'*'��n�A�����ĕ\�� ---*/
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main(void)
{
	int i, len;

	printf("�������p�񓙕ӎO�p�`�����܂��B\n");
	printf("�Z�ӁF");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}
