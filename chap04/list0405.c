/*
	�P����T�܂ł̘a�����߂ĕ\���i����������Z�q�j
*/

#include  <stdio.h>

int main(void)
{
	int	 no = 1;
	int	 sum = 0;

	do {
		sum += no;			/* sum��no�������� */
		no  += 1;			/* no �� 1�������� */
	} while (no <= 5);

	printf("�P����T�܂ł𑫂����l��%d�ł��B\n", sum);

	return (0);
}
