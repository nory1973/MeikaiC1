/*
読み込んだ正の整数値の約数を表示する
*/

#include <stdio.h>

int main(void)
{
	int i, n;

	printf("整数の値:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d ", i);
	putchar('\n');

	return 0;
}
