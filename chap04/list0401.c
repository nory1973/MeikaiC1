/*
	�ǂݍ��񂾐����l�͊�ł��邩�����ł��邩�i�D���Ȃ����J��Ԃ��j
*/

#include  <stdio.h>

int main(void)
{
	int	 cont;		/* �����𑱂��邩 */

	do {
		int	 no;	

		printf("��������͂��Ă��������F");
		scanf("%d", &no);

		if (no % 2)
			puts("���̐��͊�ł��B");
		else
			puts("���̐��͋����ł��B");

		printf("������x�H�yYes�c0�^No�c9�z�F");
		scanf("%d", &cont);
	} while (cont == 0);

	return (0);
}
