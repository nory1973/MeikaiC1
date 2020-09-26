/*
	１から５までの和を求めて表示（複合代入演算子）
*/

#include  <stdio.h>

int main(void)
{
	int	 no = 1;
	int	 sum = 0;

	do {
		sum += no;			/* sumにnoを加える */
		no  += 1;			/* no に 1を加える */
	} while (no <= 5);

	printf("１から５までを足した値は%dです。\n", sum);

	return (0);
}
