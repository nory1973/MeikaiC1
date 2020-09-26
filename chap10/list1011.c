/*
	添字演算子を伴わない配列名の値を確認（先頭要素へのポインタ）
*/

#include  <stdio.h>

int main(void)
{
	int	 vc[3];

	printf("vc   　　　　　：%p\n", vc);
	printf("vc[0]のアドレス：%p\n", &vc[0]);
	printf("vc[1]のアドレス：%p\n", &vc[1]);
	printf("vc[2]のアドレス：%p\n", &vc[2]);

	return (0);
}
