/*
	�p��̓_���Ɛ��w�̓_���̍ō��_�����߂�
*/

#include  <stdio.h>

#define  NUMBER		5

/*--- �v�f��no�̔z��vc�̍ő�l��Ԃ� ---*/
int max_of(int vc[], int no)
{
	int	 i;
	int  max = vc[0];
	for (i = 1; i < no; i++)
		if (vc[i] > max)
			max = vc[i];
	return (max);
}

int main(void)
{
	int	 i;
	int	 eng[NUMBER];		/* ���w�̓_�� */
	int	 mat[NUMBER];		/* �p��̓_�� */
	int	 max_e, max_m;		/* �ō��_ */

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d] �p��F", i + 1);  scanf("%d", &eng[i]);
		printf( "    ���w�F");		   scanf("%d", &mat[i]);
	}
	max_e = max_of(eng, NUMBER);	/* �p��̍ō��_ */
	max_m = max_of(mat, NUMBER);	/* ���w�̍ō��_ */

	printf("�p��̍ō��_��%d\n", max_e);
	printf("���w�̍ō��_��%d\n", max_m);

	return (0);
}
