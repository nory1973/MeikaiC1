/*
	��������̉p����啶���^�������ɕϊ�
*/

#include  <ctype.h>
#include  <stdio.h>

/*--- ��������̉p����啶���ɕϊ� ---*/
void str_toupper(char str[])
{
	unsigned  i = 0;
	while (str[i]) {
		str[i] = toupper(str[i]);
		i++;
	}
}

/*--- ��������̉p�����������ɕϊ� ---*/
void str_tolower(char str[])
{
	unsigned  i = 0;
		while (str[i]) {
		str[i] = tolower(str[i]);
		i++;
	}
}

int main(void)
{
	char  str[100];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	str_toupper(str);
	printf("�啶���F%s\n", str);

	str_tolower(str);
	printf("�������F%s\n", str);

	return (0);
}
