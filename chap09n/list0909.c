/*
	������𑖍����ĕ\������
*/

#include <stdio.h>

/*--- ������s��\���i���s�͂��Ȃ��j---*/
void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	printf("���Ȃ���");
	put_string(str);
	printf("�Ɠ��͂��܂����B\n");

	return 0;
}
