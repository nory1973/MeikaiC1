/*
	�ǂݍ��񂾓�̐����l�̑傫���ق��̒l�Ə������ق��̒l�����߂ĕ\��
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, max, min;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");   scanf("%d", &n1);
	printf("�����Q�F");   scanf("%d", &n2);

	if (n1 > n2) {
		max = n1;
		min = n2;
	} else {
		max = n2;
		min = n1;
	}

	printf("�傫���ق��̒l��%d�ł��B\n", max);
	printf("�������ق��̒l��%d�ł��B\n", min);

	return 0;
}
