/*
	1000以下の素数を求める（第５版）
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

	for (no = 5; no <= 1000; no += 2) {
		int	 flag = 0;
		for (i = 1; counter++, prime[i] * prime[i] <= no; i++) {
			counter++;
			if (no % prime[i] == 0) {		/* 割り切れると素数ではない */
				flag = 1;
				break;						/* それ以上の繰返しは不要 */
			}
		}
		if (!flag)							/* 最後まで割り切れなかった */
			prime[ptr++] = no;				/* 配列に登録 */
	}

	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);

	printf("乗除を行った回数：%lu\n", counter);

	return (0);
}
