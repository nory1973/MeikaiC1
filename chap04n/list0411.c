/*
	�ǂݍ��񂾐��̐����l�܂ŃJ�E���g�A�b�v�ifor���j
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	for (i = 0; i <= no; i++)
		printf("%d ", i);
	putchar('\n');		/* ���s */

	return 0;
}
