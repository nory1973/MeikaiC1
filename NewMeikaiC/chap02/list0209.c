/*
	��̐����l��ǂݍ���ŕ��ϒl�������ŕ\��
*/

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����a�F");   scanf("%d", &a);
	printf("����b�F");   scanf("%d", &b);

	printf("�����̕��ς�%f�ł��B\n", (a + b) / 2.0);

	return 0;
}
