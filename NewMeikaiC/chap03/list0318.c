/*
	�ǂݍ��񂾐����l���R�Ŋ�������]��\��
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	if (no % 3 == 0)
		puts("���̐��͂R�Ŋ���؂�܂��B");
	else if (no % 3 == 1)
		puts("���̐����R�Ŋ�������]�͂P�ł��B");
	else
		puts("���̐����R�Ŋ�������]�͂Q�ł��B");

	return 0;
}
