/*
	�t�@�C���̃I�[�v���ƃN���[�Y
*/

#include  <stdio.h>

int main(void)
{
	FILE  *fp;

	fp = fopen("abc", "r");						/* �t�@�C���̃I�[�v�� */

	if (fp == NULL)
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		/* �t�@�C������Ǎ��݂Ȃǂ��s�� */
		fclose(fp);								/* �t�@�C���̃N���[�Y */
	}

	return (0);
}
