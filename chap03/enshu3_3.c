/*
	�ǂݍ��񂾐����l�̕����𔻒�
*/

#include  <stdio.h>

int main(void)
{
	int	 no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	if (no >= 0)
		printf("��Βl��%d�ł��B", no);

	else
		printf("��Βl��%d�ł��B", -no);

	return (0);
}
