/*
	�ǂݍ��񂾐����l�̍ł����̌��̐�����\��
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);							/* �����l��ǂݍ��� */

	printf("�ł����̌���%d�ł��B\n", no % 10);

	return 0;
}
