/*
	��̐����l��ǂݍ���ŏ��Ə�]��\��
*/

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����a�F");   scanf("%d", &a);
	printf("����b�F");   scanf("%d", &b);

	printf("a��b�Ŋ����%d���܂�%d�ł��B\n", a / b, a % b);

	return 0;
}
