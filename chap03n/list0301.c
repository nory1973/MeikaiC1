/*
	�ǂݍ��񂾐����l�͂T�Ŋ���؂�Ȃ���
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	if (no % 5)
		puts("���̐��͂T�Ŋ���؂�܂���B");

	return 0;
}
