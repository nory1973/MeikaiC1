/*
	�g���Ƒ̏d��ǂݍ���ŕ��ϒl�����߂ĕ\������
*/

#include <stdio.h>

int main(void)
{
	FILE   *fp;
	int    ninzu = 0;			/* �l�� */
	char   name[100];			/* ���O */
	double height, weight;		/* �g���E�̏d */
	double hsum = 0.0;			/* �g���̍��v */
	double wsum = 0.0;			/* �̏d�̍��v */

	if ((fp = fopen("hw.dat", "r")) == NULL)				/* �I�[�v�� */
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
			printf("%-10s %5.1f %5.1f\n", name, height, weight);
			ninzu++;
			hsum += height;
			wsum += weight;
		}
		printf("----------------------\n");
		printf("����       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);											/* �N���[�Y */
	}

	return 0;
}
