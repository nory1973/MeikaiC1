/*
	������"12345"�����������ĕ\��
*/

#include  <stdio.h>

int main(void)
{
	char  str[] = "12345";

	printf("%s\n",	 str);		/* ���̂܂� */
	printf("%3s\n",	 str);		/* �Œ�R�� */
	printf("%.3s\n",	 str);	/* �R���܂� */
	printf("%8s\n",	 str);		/* �E�ɋl�� */
	printf("%-8s\n",	 str);	/* ���ɋl�� */

	return (0);
}
