/*
	�ǂݍ��񂾐����̌�����*��A���\��
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("���̐����͂Ȃ񂱂ł����H");
	scanf("%d", &no);

	while (no-- > 0)
		putchar('*');
	putchar('\n');

	return 0;
}
