/*
	�T�l�̊w���̓_����ǂݍ����60�_�ȏ�̊w���̈ꗗ��\��
*/

#include  <stdio.h>

#define	 NUMBER		5		/* �l�� */

int main(void)
{
	int	 i;
	int	 snum = 0;			/* ���i�҂̐l�� */
	int	 tensu[NUMBER];		/* NUMBER�l�̊w���̓_�� */
	int	 succs[NUMBER];		/* ���i�҃��X�g�i���i�҂̓Y�����i�[�j */
	
	puts("�_������͂��Ă��������B");
	for (i = 0; i < NUMBER; i++) {
		printf("%2d�ԁF", i + 1);
		scanf("%d", &tensu[i]);
		if (tensu[i] >= 60)
			succs[snum++] = i;		/* ���i�҃��X�g�ɒǉ� */
	}

	puts(" ���i�҈ꗗ ");
	puts("------------");
	for (i = 0; i < snum; i++)
		printf("%2d�ԁi%3d�_�j\n", succs[i] + 1, tensu[succs[i]]);

	return (0);
}
