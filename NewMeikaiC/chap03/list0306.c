/*
	�ǂݍ��񂾓�̐����l�͓�������
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");   scanf("%d", &n1);
	printf("�����Q�F");   scanf("%d", &n2);

	if (n1 == n2)
		puts("�����̒l�͓����ł��B");
	else
		puts("�����̒l�͈Ⴂ�܂��B");

	return 0;
}
