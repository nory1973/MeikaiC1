/*
	�ō��_�����߂�
*/

#include  <stdio.h>

#define  NUMBER		5

int	 tensu[NUMBER];

int	 top(void);			/* �y�֐����^�錾�z */

int main(void)
{
	extern int  tensu[];
	int	 i;

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%d�F", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("�ō��_��%d\n", top());
	return (0);
}

/*--- �z��tensu�̍ő�l��Ԃ��y�֐���`�z ---*/
int top(void)
{
	extern int  tensu[];
	int	 i;
	int  max = tensu[0];
	for (i = 1; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return (max);
}
