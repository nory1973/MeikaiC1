/*
	�x��𔭂��Ȃ���\�����s���}�N��
*/

#include  <stdio.h>

#define	 putsa(str)		( putchar('\a') , puts(str) )

int main(void)
{
	int	 na;

	printf("��������͂��Ă��������F");
	scanf("%d",	 &na);

	if (na)
		putsa("���̐��͂O�ł͂���܂���B");
	else
		putsa("���̐��͂O�ł��B");

	return (0);
}
