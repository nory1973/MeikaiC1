/*
	�z��̑S�v�f��0.0�������ĕ\��
*/

#include  <stdio.h>

int main(void)
{
	int	 i;
	double	vd[5];		/* �v�f�����T�̔z�� */

	for (i = 0; i < 5; i++)
		vd[i] = 0.0;

	for (i = 0; i < 5; i++)
		printf("vd[%d] = %.1f\n", i, vd[i]);

	return (0);
}
