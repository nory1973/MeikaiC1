/*
	�z��̗v�f�ɒl��ǂݍ���ŕ\��
*/

#include  <stdio.h>

int main(void)
{
	int	 i;
	int	 vx[5];

	for (i = 0; i < 5; i++) {
		printf("vx[%d]�F", i);
		scanf("%d", &vx[i]);
	}

	for (i = 0; i < 5; i++)
		printf("vx[%d]��%d\n", i, vx[i]);

	return (0);
}
