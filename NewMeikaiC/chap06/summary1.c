/*
	��̐����l�̕��ϒl�����߂�
*/

#include <stdio.h>

/* a��b�̕��ϒl�������ŕԂ� */
double ave2(int a, int b)
{
	return (double)(a + b) / 2;
}

int main(void)
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");   scanf("%d", &n1);
	printf("�����Q�F");   scanf("%d", &n2);

	printf("���ϒl��%.1f�ł��B\n", ave2(n1, n2));

	return 0;
}
