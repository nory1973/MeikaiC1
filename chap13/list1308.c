/*
	�~�����̒l���e�L�X�g�t�@�C���ɏ�������œǂݎ��
*/

#include  <stdio.h>

int main(void)
{
	FILE	*fp;
	double	pi = 3.14159265358979323846;

	/* ������ */
	if ((fp = fopen("PI.txt", "w")) == NULL)			/* �I�[�v�� */
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		fprintf(fp, "%f", pi);							/* pi���������� */
		fclose(fp);										/* �N���[�Y */
	}

	/* �ǎ�� */
	if ((fp = fopen("PI.txt", "r")) == NULL)			/* �I�[�v�� */
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		fscanf(fp, "%lf", &pi);							/* pi�ɓǂݎ�� */
		printf("�~������%23.21f�ł��B\n", pi);
		fclose(fp);										/* �N���[�Y */
	}

	return (0);
}
