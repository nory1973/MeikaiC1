/*
	unsigned型の論理積・論理和・排他的論理和・１の補数を表示
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
	unsigned  na, nb;

	puts("二つの非負の整数を入力してください。");
	printf("整数Ａ：");	  scanf("%u", &na);
	printf("整数Ｂ：");	  scanf("%u", &nb);

	printf("\nＡ   　 ＝ ");   print_bits(na);
	printf("\nＢ   　 ＝ ");   print_bits(nb);
	printf("\nＡ & Ｂ ＝ ");   print_bits(na & nb);		/* 論理積 */
	printf("\nＡ | Ｂ ＝ ");   print_bits(na | nb);		/* 論理和 */
	printf("\nＡ ^ Ｂ ＝ ");   print_bits(na ^ nb);		/* 排他的論理和 */
	printf("\n~Ａ　   ＝ ");   print_bits(~na);			/* １の補数 */
	printf("\n~Ｂ　   ＝ ");   print_bits(~nb);			/* １の補数 */
	putchar('\n');

	return (0);
}