/*
	�ǂݍ��񂾓�̐����l�͓��������i���̂Q�j
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");   scanf("%d", &n1);
	printf("�����Q�F");   scanf("%d", &n2);

	if (n1 != n2)
		puts("�����̒l�͈Ⴂ�܂��B");
	else
		puts("�����̒l�͓����ł��B");

	return 0;
}
