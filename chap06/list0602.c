/*
	�O�̐����̍ő�l��Ԃ��֐�
*/

#include  <stdio.h>

/*--- �O�̐����̍ő�l��Ԃ� ---*/
int max3(int x, int y, int z)
{
	int  max = x;

	if (y > max) max = y;
	if (z > max) max = z;
	return (max);
}

int main(void)
{
	int  na, nb, nc;

	puts("�O�̐�������͂��Ă��������B");
	printf("�����P�F");	  scanf("%d", &na);
	printf("�����Q�F");	  scanf("%d", &nb);
	printf("�����R�F");	  scanf("%d", &nc);

	printf("�ł��傫���l��%d�ł��B\n", max3(na, nb, nc));

	return (0);
}
