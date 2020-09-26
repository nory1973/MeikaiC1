/*
	1000ˆÈ‰º‚Ì‘f”‚ğ‹‚ß‚éi‘æ‚S”Åj
*/

#include  <stdio.h>

int main(void)
{
	int	 i, no;
	int	 prime[500];						/* ‘f”‚ğŠi”[‚·‚é”z—ñ */
	int	 ptr = 0;							/* Šù‚É“¾‚ç‚ê‚½‘f”‚ÌŒÂ” */
	unsigned long  counter = 0;

	prime[ptr++] = 2;						/* ‚Q‚Í‘f”‚Å‚ ‚é */
	prime[ptr++] = 3;						/* ‚R‚à‘f”‚Å‚ ‚é */

	for (no = 5 ; no <= 1000; no += 2) {	/* Šï”‚Ì‚İ‚ğ‘ÎÛ‚Æ‚·‚é */
		for (i = 1; i < ptr; i++) {			/* Šù‚É“¾‚ç‚ê‚½‘f”‚ÅŠ„‚Á‚Ä‚İ‚é */
			counter++;
			if (no % prime[i] == 0)			/* Š„‚èØ‚ê‚é‚Æ‘f”‚Å‚Í‚È‚¢ */
				break;						/* ‚»‚êˆÈã‚ÌŒJ•Ô‚µ‚Í•s—v */
		}
		if (ptr == i)						/* ÅŒã‚Ü‚ÅŠ„‚èØ‚ê‚È‚©‚Á‚½ */
			prime[ptr++] = no;				/* ”z—ñ‚É“o˜^ */
	}

	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);

	printf("æœ‚ğs‚Á‚½‰ñ”F%lu\n", counter);

	return (0);
}
