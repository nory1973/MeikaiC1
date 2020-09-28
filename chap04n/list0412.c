/*
	“Ç‚İ‚ñ‚¾³‚Ì®”‚ÌŒÂ”‚¾‚¯–‚ğ•\¦
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("?³‚Ì®”");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
		putchar('*');
	putchar('\n');

	return 0;
}
