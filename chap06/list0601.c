/*
	��̐����̑傫�����̒l��Ԃ��֐�
*/

#include  <stdio.h>

/*--- �傫�����̒l��Ԃ� ---*/
int maxof(int x, int y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

int main(void)
{
	int  na, nb;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");	  scanf("%d", &na);
	printf("�����Q�F");	  scanf("%d", &nb);

	printf("�傫�����̒l��%d�ł��B\n", maxof(na, nb));

	return (0);
}
