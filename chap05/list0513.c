/*
	�_���i0�`100�j��ǂݍ���ŕ��z��\��
*/

#include  <stdio.h>

#define	 NUMBER		80		/* �l���̏�� */

int main(void)
{
	int	 i, j;
	int	 num;				/* ���ۂ̐l�� */
	int	 tensu[NUMBER];		/* �w���̓_�� */
	int	 bunpu[11] = {0};	/* ���z */

	printf("�l������͂��Ă��������F");
	do {
		scanf("%d", &num);
		if (num < 1  ||  num > NUMBER)
			printf("\a�v�y1�ȏ�%d�ȉ��z�F", NUMBER);
	} while	(num < 1  ||  num > NUMBER);

	puts("�_������͂��Ă��������B");
	for (i = 0; i < num; i++) {
		printf("%2d�ԁF", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0  ||  tensu[i] > 100)
				printf("\a�v�y0�ȏ�100�ȉ��z�F");
		} while (tensu[i] < 0  ||  tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("\n�� ���z�O���t ��");
	printf("      100�F");
	for (j = 0; j < bunpu[10]; j++)
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--) {
		printf("%3d - %3d�F", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}
	
	return (0);
}
