/*
	�t�@�C���̒��g��\������
*/

#include  <stdio.h>

int main(void)
{
	int   ch;
	FILE  *fp;
	char  fname[64];	/* �t�@�C���� */

	printf("�t�@�C�����F");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)					/* �I�[�v�� */
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			putchar(ch);
		fclose(fp);											/* �N���[�Y */
	}

	return (0);
}
