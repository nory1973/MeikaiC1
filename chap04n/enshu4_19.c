/*
読み込んだ正の整数値の約数を表示する
*/
#include <stdio.h>

int main(void)
{
	int i, n, j;

	printf("整数の値:");
	scanf("%d", &n);
    j = 0;
	for (i = 1; i <= n; i++)
		if (n % i == 0){
			printf("%d\n", i);
            j++;
            }
	printf("約数の個数は%d個です。\n", j);
	return 0;
}
