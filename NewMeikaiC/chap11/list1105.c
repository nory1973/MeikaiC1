/*
	������̒����𒲂ׂ�i�|�C���^�ɂ�鑖���j
*/

#include <stdio.h>

/*--- ������s�̒�����Ԃ� ---*/
int str_length(const char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return len;
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	printf("������\"%s\"�̒�����%d�ł��B\n", str, str_length(str));

	return 0;
}
