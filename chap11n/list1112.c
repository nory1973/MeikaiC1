/*
	atoi�֐��̗��p��
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	printf("�����ɕϊ������%d�ł��B\n", atoi(str));

	return 0;
}
