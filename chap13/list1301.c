/*
	ファイルのオープンとクローズ
*/

#include  <stdio.h>

int main(void)
{
	FILE  *fp;

	fp = fopen("abc", "r");						/* ファイルのオープン */

	if (fp == NULL)
		printf("\aファイルをオープンできません。\n");
	else {
		/* ファイルから読込みなどを行う */
		fclose(fp);								/* ファイルのクローズ */
	}

	return (0);
}
