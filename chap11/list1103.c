/*
	文字列の代入（？）
*/

#include  <stdio.h>

int main(void)
{
	char   str[] = "ABC";
	char  *ptr   = "123";

	str = "DEF";		/* エラー：初期化子を代入することはできない */
	ptr = "456";		/* 正しい：他の文字列リテラルを指す */

	printf("str = \"%s\"\n", str);
	printf("ptr = \"%s\"\n", ptr);

	return (0);
}
