/*
	�O�̐����̍ő�l�����߂�
*/

#include <stdio.h>

/*--- �O�̐����̍ő�l��Ԃ� ---*/
int max3(int a, int b, int c)
{
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main(void)
{
	int a, b, c;

	puts("�O�̐�������͂��Ă��������B");
	printf("����a�F");	  scanf("%d", &a);
	printf("����b�F");	  scanf("%d", &b);
	printf("����c�F");	  scanf("%d", &c);

	printf("�ő�l��%d�ł��B\n", max3(a, b, c));

	return 0;
}
