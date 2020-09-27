/*
	読み込んだ整数値の符号を判定
*/

#include  <stdio.h>

int main(void)
{
	int	 no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	if (no >= 0)
		printf("絶対値は%dです。", no);

	else
		printf("絶対値は%dです。", -no);

	return (0);
}
