/*
	��������R�s�[����
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
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("�R�s�[����̂́F", tmp);
	scanf("%s", tmp);

	str_copy(str, tmp);

	puts("�R�s�[���܂����B");
	printf("str = \"%s\"\n", str);

	return 0;
}
