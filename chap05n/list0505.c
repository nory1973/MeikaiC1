/*
	�z��̊e�v�f��擪���珇��1,2,3,4,5�ŏ��������ĕ\��
*/

#include <stdio.h>

int main(void)
{
	int i;
	int v[5] = {1, 2, 3, 4, 5};		/* ������ */

	for (i = 0; i < 5; i++)			/* �v�f�̒l��\�� */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
