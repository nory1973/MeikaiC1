/*
	�w���̓_����ǂݍ���ŕ��z��\��
*/

#include <stdio.h>

#define NUMBER	80		/* �l���̏�� */

int main(void)
{
	int i, j;
	int num;				/* ���ۂ̐l�� */
	int tensu[NUMBER];		/* �w���̓_�� */
	int bunpu[11] = {0};	/* �_���̕��z */

	printf("�l������͂��Ă��������F");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1�`%d�œ��͂��Ă��������F", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d�l�̓_������͂��Ă��������B\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d�ԁF", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a1�`100�œ��͂��Ă��������F");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("\n---���z�O���t---");
	printf("      100�F");

	for (j = 0; j < bunpu[10]; j++)			/* 100�_ */
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--) {				/* 100�_���� */
		printf("%3d �`%3d�F", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
