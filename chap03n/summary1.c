/*
	��3�͂̂܂Ƃ߁i���̂P�j�ǂݍ��񂾌��̋G�߂�\��
*/

#include <stdio.h>

int main(void)
{
	int month;					/* �� */

	printf("�����ł����F");
	scanf("%d", &month);

	if (month < 1 || month > 12)
		printf("%d���͂���܂����!!\a\n", month);
	else if (month <= 2 || month == 12)
		printf("%d���͓~�ł��B\n", month);
	else if (month >= 9)
		printf("%d���͏H�ł��B\n", month);
	else if (month >= 6)
		printf("%d���͉Ăł��B\n", month);
	else
		printf("%d���͏t�ł��B\n", month);

	return 0;
}
