/*
	�t�@�C�����R�s�[����
*/

#include  <stdio.h>

int main(void)
{
	int   ch;
	FILE  *sfp, *dfp;
	char  sname[64], dname[64];		/* �t�@�C���� */

	printf("�R�s�[���t�@�C�����F");	  scanf("%s", sname);
	printf("�R�s�[��t�@�C�����F");	  scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* �R�s�[�����I�[�v�� */
		printf("\a�R�s�[���t�@�C�����I�[�v���ł��܂���B\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* �R�s�[����I�[�v�� */
			printf("\a�R�s�[��t�@�C�����I�[�v���ł��܂���B\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
				fputc(ch, dfp);
			fclose(dfp);							/* �R�s�[����N���[�Y */
		}
		fclose(sfp);								/* �R�s�[�����N���[�Y */
	}

	return (0);
}
