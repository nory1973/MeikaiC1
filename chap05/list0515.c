/*
	1000以下の素数を求める（第１版）
*/

#include  <stdio.h>

int main(void)
{
	int	 i, no;
	unsigned long  counter = 0;

	for (no = 2; no <= 1000; no++) {
		for (i = 2; i < no; i++) {
			counter++;
			if (no % i == 0)	/* 割り切れると素数ではない */
				break;			/* それ以上の繰返しは不要 */
		}
		if (no == i)			/* 最後まで割り切れなかった */
			printf("%d\n", no);
	}

	printf("乗除を行った回数：%lu\n", counter);

	return (0);
}
