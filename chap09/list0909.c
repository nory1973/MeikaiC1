/*
	文字列の長さを調べる
*/

#include  <stdio.h>

/*--- 文字列strの長さを返す ---*/
unsigned str_length(const char str[])
{
	unsigned  len = 0;

	while (str[len])
		len++;
	return (len);
}

int main(void)
{
	char  st[100];

	printf("文字列を入力してください：");
	scanf("%s", st);

	printf("文字列%sの長さは%uです。\n", st, str_length(st));

	return (0);
}
