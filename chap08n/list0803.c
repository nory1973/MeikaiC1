/*
	�x��𔭂��Ȃ���\�����s���}�N���i�ԈႢ�F�|��E���s�s�\�j
*/

#include <stdio.h>

#define puts_alert(str)  { putchar('\a'); puts(str); }

int main(void)
{
	int n;

	printf("��������͂��Ă��������F");
	scanf("%d", &n);

	if (n)
		puts_alert("���̐��̓[���ł͂���܂���B");
	else
		puts_alert("���̐��̓[���ł��B");

	return 0;
}
