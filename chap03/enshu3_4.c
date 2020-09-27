/*
	読み込んだ整数値の符号を判定
*/

#include  <stdio.h>

int main(void)
{
	int	 na, nb;

	printf("二つの整数を入力してください\n");
	printf("整数A：");
    scanf("%d", &na);
    printf("整数B：");
    scanf("%d", &nb);

	if (na == nb)
		puts("AとBは等しいです。");
	else if (na > nb)
		puts("AはBより大きいです。");
	else
//    else if (no < 0)
		puts("AはBより小さいです。");

	return (0);
}
