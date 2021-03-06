/*
	1000以下の素数を求める（第４版）
*/

#include  <stdio.h>

int main(void)
{
	int	 i, no;
	int	 prime[500];						/* 素数を格納する配列 */
	int	 ptr = 0;							/* 既に得られた素数の個数 */
	unsigned long  counter = 0;

	prime[ptr++] = 2;						/* ２は素数である */
	prime[ptr++] = 3;						/* ３も素数である */

	for (no = 5 ; no <= 1000; no += 2) {	/* 奇数のみを対象とする */
		for (i = 1; i < ptr; i++) {			/* 既に得られた素数で割ってみる */
			counter++;
			if (no % prime[i] == 0)			/* 割り切れると素数ではない */
				break;						/* それ以上の繰返しは不要 */
		}
		if (ptr == i)						/* 最後まで割り切れなかった */
			prime[ptr++] = no;				/* 配列に登録 */
	}

	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);

	printf("乗除を行った回数：%lu\n", counter);

	return (0);
}
