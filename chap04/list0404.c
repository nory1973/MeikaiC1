/*
	�P����T�܂ł̘a�����߂ĕ\��
*/

#include  <stdio.h>

int main(void)
{
	int	 no = 1;
	int	 sum = 0;

	do {
		sum = sum + no;
		no  = no + 1;
	} while (no <= 5);

	printf("�P����T�܂ł𑫂����l��%d�ł��B\n", sum);

	return (0);
}
