/*
	��̐����̑傫���ق��̒l�����߂�
*/

#include <stdio.h>

/*--- �傫���ق��̒l��Ԃ� ---*/
int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main(void)
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");   scanf("%d", &n1);
	printf("�����Q�F");   scanf("%d", &n2);

	printf("�傫���ق��̒l��%d�ł��B\n", max2(n1, n2));

	return 0;
}
