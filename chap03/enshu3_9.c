/*
	�O�̐����l��ǂݍ���ł��̍ŏ��l��\������
*/

#include  <stdio.h>

int main(void)
{
	int	 n1, n2, n3, min1, min2;

	puts("3�̐�������͂��Ă��������B");
	printf("�����P�F");	scanf("%d", &n1);
	printf("�����Q�F");	scanf("%d", &n2);
    printf("�����R�F");	scanf("%d", &n3);

	min1 = ( n1 > n2) ? n2 : n1;
    min2 = ( min1 > n3 ) ? n3 : min1;
    //min1 = ( n1 >= n2) ? n2 : n1;
    //min2 = ( min1 >= n3 ) ? n3 : min1;

	printf("�ŏ��l��%d�ł��B\n", min2);

	return (0);
}
