/*
	�ǂݍ��񂾐����l�̍ŉ��ʌ��͂T�ł��邩
*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("��������͂��Ă��������F");
	scanf("%d", &num);

	if ((num % 10) == 5)
		puts("�ŉ��ʂ̌��͂T�ł��B");
	else
		puts("�ŉ��ʂ̌��͂T�ł͂���܂���B");

	return 0;
}
