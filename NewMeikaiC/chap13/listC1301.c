/*
	���݂̓��t�E������\��
*/

#include <time.h>
#include <stdio.h>

int main()
{
	time_t current = time(NULL);				/* ���݂̗�� */
	struct tm *timer = localtime(&current);		/* �v�f�ʂ̎����i�n�����j*/
	char *wday_name[] = {"��", "��", "��", "��", "��", "��", "�y"};

	printf("���݂̓��t�E������%d�N%d��%d���i%s�j%d��%d��%d�b�ł��B\n",
			timer->tm_year + 1900,			/* �N�i1900�������ċ��߂�j*/
			timer->tm_mon + 1,				/* ���i1�������ċ��߂�j*/
			timer->tm_mday,					/* �� */
			wday_name[timer->tm_wday],		/* �j���i0�`6�j*/
			timer->tm_hour,					/* �� */
			timer->tm_min,					/* �� */
			timer->tm_sec					/* �b */
		  );
	return 0;
}
