/*
	�O�̐����l��ǂݍ����,
    �ȉ��R��\������v���O����
    1.�O�̒l�͓������ł��B
    2.��̒l���������ł��B
    3.�O�̒l�͈قȂ�܂��B
*/

#include  <stdio.h>

int main(void)
{
	int	 n1, n2, n3;

	puts("3�̐�������͂��Ă��������B");
	printf("�����P�F");	scanf("%d", &n1);
	printf("�����Q�F");	scanf("%d", &n2);
    printf("�����R�F");	scanf("%d", &n3);

    if( n1 == n2 && n2 == n3 ) 
    	printf("�O�̒l�͓������ł��B\n");
    else if( n1 == n2 || n2 == n3 || n1 == n3)
        printf("��̒l���������ł��B\n");
    else
        printf("�O�̒l�͈قȂ�܂��B\n");
	return (0);
}
