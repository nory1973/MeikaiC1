/*
	�ǂݍ��񂾐����̌���������A���\���ifor���j
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���̐����F");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
		putchar('*');
	putchar('\n');

	return 0;
}
