/*
	������𑖍����ĕ\������
*/

#include <stdio.h>

#define STR_LENGTH	128		/* ������̍ő咷�i�i���������܂ށj*/

/*--- ������s�ƍ\��������\��---*/
void put_string_rep(const char s[])
{
	int i = 0;

	while (s[i])
		putchar(s[i++]);

	printf("   { ");

	i = 0;
	while (s[i]) {
		putchar('"');
		putchar(s[i++]);
		printf("' ");
	}

	printf("'\\0' }\n");
}

int main(void)
{
	int i;
	char s[STR_LENGTH];
	char ss[5][STR_LENGTH];

	printf("������s�F");
	scanf("%s", s);

	printf("��������T���͂��Ă��������B\n");
	for (i = 0; i < 5; i++) {
		printf("ss[%d]�F", i);
		scanf("%s", ss[i]);
	}

	printf("������s�F");
	put_string_rep(s);

	printf("������̔z��ss\n");
	for (i = 0; i < 5; i++) {
		printf("ss[%d]�F", i);
		put_string_rep(ss[i]);
	}

	return 0;
}
