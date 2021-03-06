/*
	1000以下の素数を求める（第３版）
*/

#include  <stdio.h>

int main(void)
{
	int	 i, no;
	unsigned long  counter = 0;

	no = 2;
	printf("%d\n", no++);					/* ２は偶数で唯一の素数である */

	for ( ; no <= 1000; no += 2) {			/* 奇数のみを対象とする */
		for (i = 3; i < no; i += 2) {		/* 奇数のみで割ってみる */
			counter++;
			if (no % i == 0)				/* 割り切れると素数ではない */
				break;						/* それ以上の繰返しは不要 */
		}
		if (no == i)						/* 最後まで割り切れなかった */
			printf("%d\n", no);
	}

	printf("乗除を行った回数：%lu\n", counter);

	return (0);
}
