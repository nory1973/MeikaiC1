/*
	オブジェクトのアドレスを表示する
*/

#include  <stdio.h>

int main(void)
{
	int		nx;
	double	dx;
	int		vc[3];

	printf("nx[0]のアドレス：%p\n", &nx);
	printf("dx[0]のアドレス：%p\n", &dx);
	printf("vc[0]のアドレス：%p\n", &vc[0]);
	printf("vc[1]のアドレス：%p\n", &vc[1]);
	printf("vc[2]のアドレス：%p\n", &vc[2]);

	return (0);
}
