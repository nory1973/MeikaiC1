/*
	�T�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��
*/

#include  <stdio.h>

#define	 NUMBER		5		/* �l�� */	

int main(void)
{
	int	 i;
	int	 tensu[NUMBER];		/* �w���̓_�� */
	int	 sum = 0;			/* ���v�_ */

	puts("�_������͂��Ă��������B");
	for (i = 0; i < NUMBER; i++) {
		printf("%2d�ԁF", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("���v�_�F%5d\n", sum);
	printf("���ϓ_�F%5.1f\n", (double)sum / NUMBER);

	return (0);
}
