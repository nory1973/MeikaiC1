/*
	�W�����͂���ǂݍ��܂ꂽ�����������J�E���g����i��Q�Łj
*/

#include <stdio.h>

int main(void)
{
	int i, ch;
	int cnt[10] = {0};		/* ���������̏o���� */

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			cnt[ch - '0']++;
	}

	puts("���������̏o����");
	for (i = 0; i < 10; i++)
		printf("'%d'�F%d\n", i, cnt[i]);

	return 0;
}
