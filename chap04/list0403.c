/*
	�ǂݍ��񂾔񕉂̐����l�̌��������߂�
*/

#include  <stdio.h>

int main(void)
{
	int	 num;
	int  dig;		/* ���� */

	do {
		printf("�񕉂̐�������͂��Ă��������F");
		scanf("%d", &num);
		if (num < 0)
			puts("\a���̐�����͂��Ȃ��ł��������B");
	} while (num < 0);
										/* num��0�ȏ�ƂȂ��Ă��� */
	dig = 0;
	do {
		num = num / 10;					/* �E�ɂP�����炷 */
		dig = dig + 1;
	} while (num > 0);
	printf("���̐���%d���ł��B\n", dig);

	return (0);
}
