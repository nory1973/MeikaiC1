/*
	�ǂݍ��񂾐����l�̕����𔻒�
*/

#include  <stdio.h>

int main(void)
{
	int	 na, nb;

	printf("��̐�������͂��Ă�������\n");
	printf("����A�F");
    scanf("%d", &na);
    printf("����B�F");
    scanf("%d", &nb);

	if (na == nb)
		puts("A��B�͓������ł��B");
	else if (na > nb)
		puts("A��B���傫���ł��B");
	else
//    else if (no < 0)
		puts("A��B��菬�����ł��B");

	return (0);
}
