/*
	1000ˆÈ‰º‚Ì‘f”‚ğ‹‚ß‚éi‘æ‚T”Åj
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

	for (no = 5; no <= 1000; no += 2) {
		int	 flag = 0;
		for (i = 1; counter++, prime[i] * prime[i] <= no; i++) {
			counter++;
			if (no % prime[i] == 0) {		/* Š„‚èØ‚ê‚é‚Æ‘f”‚Å‚Í‚È‚¢ */
				flag = 1;
				break;						/* ‚»‚êˆÈã‚ÌŒJ•Ô‚µ‚Í•s—v */
			}
		}
		if (!flag)							/* ÅŒã‚Ü‚ÅŠ„‚èØ‚ê‚È‚©‚Á‚½ */
			prime[ptr++] = no;				/* ”z—ñ‚É“o˜^ */
	}

	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);

	printf("æœ‚ğs‚Á‚½‰ñ”F%lu\n", counter);

	return (0);
}
