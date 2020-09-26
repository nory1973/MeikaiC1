/*
	�O��̃v���O�������s���̓��t�Ǝ�����\������
*/

#include  <time.h>
#include  <stdio.h>

char  data_file[] = "datetime.dat";				/* �t�@�C���� */

/*--- �O��̓��t�E�������擾�E�\�� ---*/
void get_data(void)
{
	FILE  *fp;

	if ((fp = fopen(data_file, "r")) == NULL) {				/* �I�[�v�� */
		printf("�{�v���O���������s����̂͏��߂Ăł��ˁB\n");
	} else {
		int	 year, month, day, h, m, s;

		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		printf("�O���%d�N%d��%d��%d��%d��%d�b�ł����B\n",
										year, month, day, h, m, s);
		fclose(fp);											/* �N���[�Y */
	}
}

/*--- ����̓��t�E�������������� ---*/
void put_data(void)
{
	FILE  *fp;
	time_t	   t;
	struct tm  *local;

	time(&t);
	local = localtime(&t);

	if ((fp = fopen(data_file, "w")) == NULL)				/* �I�[�v�� */
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		fprintf(fp, "%d %d %d %d %d %d\n",
				local->tm_year + 1900, local->tm_mon + 1, local->tm_mday,
				local->tm_hour,		   local->tm_min,	  local->tm_sec);
		fclose(fp);											/* �N���[�Y */
	}
}

int main(void)
{
	get_data();			/* �O��̓��t�E�������擾�E�\�� */

	put_data();			/* ����̓��t�E�������������� */

	return (0);
}
