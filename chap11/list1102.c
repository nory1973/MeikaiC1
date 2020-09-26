/*
	配列で実現する文字列とポインタで実現する文字列の共通点
*/

#include  <stdio.h>

int main(void)
{
	int	   i;
	char   str[] = "ABC";
	char  *ptr   = "123";

	for (i = 0; str[i]; i++)
		putchar(str[i]);		/* str[i]は、先頭からi個後ろの要素 */
	putchar('\n');

	for (i = 0; ptr[i]; i++)
		putchar(ptr[i]);		/* ptr[i]は、先頭からi個後ろの要素 */
	putchar('\n');

	printf("str = \"%s\"\n", str);		/* strは先頭文字へのポインタ */
	printf("ptr = \"%s\"\n", ptr);		/* ptrは先頭文字へのポインタ */

	return (0);
}
