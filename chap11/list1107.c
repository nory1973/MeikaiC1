/*
	��������R�s�[����
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
	char  s1[128] = "ABCD";
	char  s2[128] = "EFGH";

	printf("������s1�F");	  scanf("%s", s1);

	str_copy(s2, s1);

	puts("s1��s2�ɃR�s�[���܂����B");
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);

	return (0);
}
