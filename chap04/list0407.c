/*
	�ǂݍ��񂾐����l���O�܂ŃJ�E���g�_�E��
*/

#include  <stdio.h>

int main(void)
{
	int	 no;
	
	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	while (no >= 0) {
		printf("%d ", no);
		no--;			/* no�̒l���f�N�������g����i����炷�j */
	}
	putchar('\n');		/* ���s */

	return (0);
}
