/*
	�ǂݍ��񂾐����l�����ł���΋����^��̕ʂ𔻒肵�ĕ\��
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	if (no > 0)
		if (no % 2 == 0)
			puts("���̐��͋����ł��B");
		else
			puts("���̐��͊�ł��B");
	else
		puts("���łȂ��l�����͂���܂����B\a\n");

	return 0;
}
