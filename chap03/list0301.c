/*
	読み込んだ整数値は５で割り切れないか
*/

#include  <stdio.h>

int main(void)
{
	int	 vx;

	printf("整数を入力してください：");
	scanf("%d", &vx);

	if (vx % 5)
		puts("その数は５で割り切れません。");

	return (0);
}
