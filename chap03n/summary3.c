/*
	�ǂݍ��񂾓�̐����l�̑傫���ق��̒l�Ə������ق��̒l�����߂ĕ\��
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");   scanf("%d", &n1);
	printf("�����Q�F");   scanf("%d", &n2);

	if (n1 > n2) {
		printf("�傫���̂�n1�ł��B\n");
		printf("����%d�ł��B\n", n1 - n2);
	} else {
		printf("�傫���̂�n2�ł��B\n");
		printf("����%d�ł��B\n", n2 - n1);
	}

	return 0;
}
