/*
	�����̓��t��\������
*/

#include  <time.h>
#include  <stdio.h>

void put_date(void)
{
	time_t		current;
	struct tm  *local;
	char  wday_name[][3] = { "��", "��", "��", "��", "��", "��", "�y" };

	time(&current);						/* ���݂̎������擾 */
	local = localtime(&current);		/* �n�����̍\���̂ɕϊ� */
	printf("%4d�N%02d��%02d��(%s)", local->tm_year + 1900		/* �N */
								  ,	local->tm_mon + 1			/* �� */
								  , local->tm_mday				/* �� */
								  , wday_name[local->tm_wday] 	/* �j�� */
		  );
}

int main(void)
{
	printf("������");
	put_date();
	printf("�ł��B\n");

	return (0);
}
