/*
	’·•ûŒ`‚ğ•`‰æ
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width;

	puts("’·•ûŒ`‚ğì‚è‚Ü‚·");
	printf("‚‚³:"); scanf("%d", &height);
	printf("‰¡•:"); scanf("%d", &width);

	for (i = 1; i <= height; i++) {			/* height?s */
		for (j = 1; j <= width; j++)		/* width */
			putchar('*');
		putchar('\n');						/* ‰üs*/
	}
	return 0;
}
