/*
	�z��̊e�v�f�ɐ擪���珇��1,2,3,4,5�������ĕ\���ifor���j
*/

#include  <stdio.h>

int main(void)
{
	int	 i;
	int	 vc[5];		/* �v�f�����T�̔z�� */

	for (i = 0; i < 5; i++)
		vc[i] = i + 1;

	for (i = 0; i < 5; i++)
		printf("vc[%d] = %d\n", i, vc[i]);

	return (0);
}
