/*
	�ō��_�����߂�
*/

#include <stdio.h>

#define NUMBER	5	/* �w���̐l�� */

int tensu[NUMBER];	/* �z��̒�` */

int top(void);		/* �֐�top�̊֐����^�錾 */

int main(void)
{
	extern int tensu[];		/* �z��̐錾�i�ȗ��j*/
	int i;

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%d�F", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("�ō��_��%d\n", top());

	return 0;
}

/*--- �z��tensu�̍ő�l��Ԃ��֐�top�̊֐���` ---*/
int top(void)
{
	extern int tensu[];		/* �z��̐錾�i�ȗ��j*/
	int i;
	int max = tensu[0];

	for (i = 1; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return max;
}
