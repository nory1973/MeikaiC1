/*
	�t�@�C���̃I�[�v���ƃN���[�Y
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("abc", "r");						/* �t�@�C���̃I�[�v�� */

	if (fp == NULL)
		printf("\a�t�@�C��\"abc\"���I�[�v���ł��܂���ł����B\n");
	else {
		printf("\a�t�@�C��\"abc\"���I�[�v�����܂����B\n");
		fclose(fp);								/* �t�@�C���̃N���[�Y */
	}

	return 0;
}
