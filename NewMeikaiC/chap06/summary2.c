/*
	��O�̐��l���o��������
*/

#include <stdio.h>

/* no���L�����đO��̒l��ԋp */
int val(int no)
{
	static int v;
	int temp = v;

	v = no;
	return temp;
}

int main(void)
{
	int retry;

	do {
		int n;

		printf("�L��������l�F");
		scanf("%d", &n);
		printf("�L�������܂����B���Ȃ݂ɑO���%d�ł����B\n", val(n));

		printf("������x�H�yYes�c0�^No�c9�z�F");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
