
/*
��̐����l��ǂݍ���ŁA
�����̍����P�O�ȉ��ł���΁A
�u�����̍��͂P�O�ȉ��ł��B�v
�����łȂ���΁A
�u�����̍��͂P�P�ȏ�ł��B�v
�ƕ\������v���O�������쐬
*/

#include  <stdio.h>

int main(void)
{
	int	 n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");	scanf("%d", &n1);
	printf("�����Q�F");	scanf("%d", &n2);

    if((n1 > n2 ? n1 - n2 : n2 - n1) <= 10 ) 
    printf("�����̍��͂P�O�ȉ��ł��B\n");
    else 
    printf("�����̍��͂P�P�ȏ�ł��B\n");

	return (0);
}