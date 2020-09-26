/*
	unsigned型のビット構成を表示
*/

#include  <stdio.h>

/*--- 整数x中のセットされたビット数を返す ---*/
int count_bits(unsigned x)
{
	int	 count = 0;
	while (x) {
		if (x & 1U) count++;
		x >>= 1;
	}
	return (count);
}

/*--- unsigned型のビット数を返す ---*/
int int_bits(void)
{
	return (count_bits(~0U));
}

/*--- unsigned型のビット内容を表示 ---*/
void print_bits(unsigned x)
{
	int	 i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	unsigned  nx;

	printf("非負の整数を入力してください：");
	scanf("%u", &nx);

	print_bits(nx);
	putchar('\n');

	return (0);
}
