/*
	��������R�s�[����i�������j
*/

#include <stdio.h>

/*--- ������s��d�ɃR�s�[���� ---*/
char *str_copy(char *d, const char *s)
{
	char *t = d;

	while (*d++ = *s++)
		;
	return t;
}

int main(void)
{
	char *ptr = "1234";
	char tmp[128];

	printf("ptr = \"%s\"\n", ptr);

	printf("�R�s�[����̂́F", tmp);
	scanf("%s", tmp);

	str_copy(ptr, tmp);					/* tmp��ptr�ɃR�s�[ */

	puts("�R�s�[���܂����B");
	printf("ptr = \"%s\"\n", ptr);		/* �R�s�[���ptr��\�� */

	return 0;
}
