/*
	�w���̓_����ǂݍ���ōō��_�ƍŒ�_��\��
*/

#include <stdio.h>

#define NUMBER	5		/* �w���̐l�� */

int main(void)
{
	int i;
	int tensu[NUMBER];	/* NUMBER�l�̊w���̓_�� */
	int max, min;		/* �ō��_�E�Œ�_ */

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d�ԁF", i + 1);
		scanf("%d", &tensu[i]);
	}

	min = max = tensu[0];
	for (i = 1; i < NUMBER; i++) {
		if (tensu[i] > max) max = tensu[i];
		if (tensu[i] < min) min = tensu[i];
	}

	printf("�ō��_�F%d\n", max);
	printf("�Œ�_�F%d\n", min);

	return 0;
}
