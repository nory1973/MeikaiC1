/*
	�v���O���������s�������t�E�������t�@�C���ɏ����o��
*/

#include <time.h>
#include <stdio.h>

int main(void)
{
	FILE *fp;
	time_t current = time(NULL);				/* ���݂̗�� */
	struct tm *timer = localtime(&current);		/* �v�f�ʂ̎����i�n�����j*/

	if ((fp = fopen("dt_dat", "w")) == NULL)				/* �I�[�v�� */
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		printf("���݂̓��t�E�����������o���܂����B\n");
		fprintf(fp, "%d %d %d %d %d %d\n",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour,		   timer->tm_min,	  timer->tm_sec  );
		fclose(fp);											/* �N���[�Y */
	}

	return 0;
}
