/*
	������̒����𒲂ׂ�i�|�C���^�Łj
*/

#include  <stdio.h>

/*--- ������s�̒�����Ԃ� ---*/
size_t str_length(const char *s)
{
	size_t	len = 0;

	while (*s++)
		len++;
	return (len);
}

int main(void)
{
	char  st[100];

	printf("���������͂��Ă��������F");
	scanf("%s", st);

	printf("������%s�̒�����%u�ł��B\n", st, (unsigned)str_length(st));

	return (0);
}
