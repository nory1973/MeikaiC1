/*
	’€Ÿ’Tõ
*/

#include  <stdio.h>

#define	 NUMBER		5
#define	 FAILED		-1

/*--- —v‘f”no‚Ì”z—ñvc‚©‚çkey‚Æˆê’v‚·‚é—v‘f‚ğ’Tõ ---*/
int search(const int vc[], int key, int no)
{
	int	 i = 0;

	while (1) {
		if (i == no)
			return (FAILED);		/* ’Tõ¸”s */
		if (vc[i] == key)
			return (i);				/* ’Tõ¬Œ÷ */
		i++;
	}
}

int main(void)
{
	int	 i, ky, idx;
	int	 vx[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]F", i);
		scanf("%d", &vx[i]);
	}
	printf("’T‚·’lF");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FAILED)
		puts("\a’Tõ‚É¸”s‚µ‚Ü‚µ‚½B");
	else
		printf("%d‚Í%d”Ô–Ú‚É‚ ‚è‚Ü‚·B\n", ky, idx + 1);

	return (0);
}
