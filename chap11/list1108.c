/*
	��������R�s�[����i������j
*/

#include  <stdio.h>

/*--- ������s��d�ɃR�s�[���� ---*/
char *str_copy(char *d, const char *s)
{
	char  *t = d;

	while (*d++ = *s++)
		;
	return (t);
}

int main(void)
{
	char  str[128] = "ABCD";
	char  *ptr     = "EFGH";

	printf("������str�F");	  scanf("%s", str);

	str_copy(ptr, str);

	puts("str��ptr�ɃR�s�[���܂����B");
	printf("str = %s\n", str);
	printf("ptr = %s\n", ptr);

	return (0);
}
