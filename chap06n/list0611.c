/*
	�p��̓_���Ɛ��w�̓_���̍ō��_�����߂�
*/

#include <stdio.h>

#define NUMBER	5		/* �w���̐l�� */

/*--- �v�f��n�̔z��v�̍ő�l��Ԃ� ---*/
int max_of(int v[], int n)
{
	int i;
	int max = v[0];

	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];
	return max;
}

int main(void)
{
	int i;
	int eng[NUMBER];		/* �p��̓_�� */
	int mat[NUMBER];		/* ���w�̓_�� */
	int max_e, max_m;		/* �ō��_ */

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d] �p��F", i + 1);  scanf("%d", &eng[i]);
		printf( "    ���w�F");         scanf("%d", &mat[i]);
	}
	max_e = max_of(eng, NUMBER);	/* �p��̍ō��_ */
	max_m = max_of(mat, NUMBER);	/* ���w�̍ō��_ */

	printf("�p��̍ō��_��%d\n", max_e);
	printf("���w�̍ō��_��%d\n", max_m);

	return 0;
}
