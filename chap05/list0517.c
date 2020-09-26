/*
	1000ˆÈ‰º‚Ì‘f”‚ğ‹‚ß‚éi‘æ‚R”Åj
*/

#include  <stdio.h>

int main(void)
{
	int	 i, no;
	unsigned long  counter = 0;

	no = 2;
	printf("%d\n", no++);					/* ‚Q‚Í‹ô”‚Å—Bˆê‚Ì‘f”‚Å‚ ‚é */

	for ( ; no <= 1000; no += 2) {			/* Šï”‚Ì‚İ‚ğ‘ÎÛ‚Æ‚·‚é */
		for (i = 3; i < no; i += 2) {		/* Šï”‚Ì‚İ‚ÅŠ„‚Á‚Ä‚İ‚é */
			counter++;
			if (no % i == 0)				/* Š„‚èØ‚ê‚é‚Æ‘f”‚Å‚Í‚È‚¢ */
				break;						/* ‚»‚êˆÈã‚ÌŒJ•Ô‚µ‚Í•s—v */
		}
		if (no == i)						/* ÅŒã‚Ü‚ÅŠ„‚èØ‚ê‚È‚©‚Á‚½ */
			printf("%d\n", no);
	}

	printf("æœ‚ğs‚Á‚½‰ñ”F%lu\n", counter);

	return (0);
}
