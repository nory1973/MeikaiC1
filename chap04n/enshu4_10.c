/*
“Ç‚İ‚ñ‚¾ŒÂ”‚¾‚¯c‚É–‚ğ•\¦
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("³‚Ì®”‚Í‚È‚ñ‚±‚Å‚·‚©H");
	scanf("%d", &no);

    if ( no > 0 ){
	    while (no-- > 0)
        {
		    putchar('*');
	        putchar('\n');
        }
    }
	return 0;
}
