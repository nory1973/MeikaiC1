/*
	�O�̐����l��ǂݍ���ł��̍ŏ��l��\������
*/

#include  <stdio.h>

int main(void)
{
	int	 n1, n2, n3, min;

	puts("3�̐�������͂��Ă��������B");
	printf("�����P�F");	scanf("%d", &n1);
	printf("�����Q�F");	scanf("%d", &n2);
    printf("�����R�F");	scanf("%d", &n3);

	min = n1;
    if( min > n2 ) min = n2;
    if( min > n3 ) min = n3;

	printf("�ŏ��l��%d�ł��B\n", min);

	return (0);
}
