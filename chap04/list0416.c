/*
	�ǂݍ��񂾔񕉂̐����l�̌���������A�����ĕ\���i�D���Ȃ����J��Ԃ��j
*/

#include  <stdio.h>

int main(void)
{
	int	 cont;

	do {
		int	 num, i;

		do {
			printf("�񕉂̐�������͂��Ă��������F");
			scanf("%d", &num);
			if (num < 0)
				puts("\a���̐�����͂��Ȃ��ł��������B");
		} while (num < 0);
										/* num��0�ȏ�ƂȂ��Ă��� */
		for (i = 1; i <= num; i++)
			putchar('*');
		putchar('\n');

		printf("������x�H�yYes�c0�^No�c9�z�F");
		scanf("%d", &cont);
	} while (!cont);

	return (0);
}
