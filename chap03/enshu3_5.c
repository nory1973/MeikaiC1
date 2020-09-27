/*
二つの整数を読込、
等価演算子や関係演算子が
「１」あるいは「０」の値を生成することを
確認するプログラム
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

	if (na == nb) {
		puts("AとBは等しいです。");
        printf(" na == nb %d\n", na == nb);
        printf(" na != nb %d\n", na != nb);
        printf(" na > nb %d\n", na > nb);
        printf(" na < nb %d\n", na < nb);
        printf(" na >= nb %d\n", na >= nb);
        printf(" na <= nb %d\n", na <= nb);
	} else if (na > nb) {
		puts("AはBより大きいです。");
        printf(" na == nb %d\n", na == nb);
        printf(" na != nb %d\n", na != nb);
        printf(" na > nb %d\n", na > nb);
        printf(" na < nb %d\n", na < nb);
        printf(" na >= nb %d\n", na >= nb);
        printf(" na <= nb %d\n", na <= nb);
    } else {
//    else if (no < 0)
        printf(" na == nb %d\n", na == nb);
        printf(" na != nb %d\n", na != nb);
        printf(" na > nb %d\n", na > nb);
        printf(" na < nb %d\n", na < nb);
        printf(" na >= nb %d\n", na >= nb);
        printf(" na <= nb %d\n", na <= nb);
    }
    printf(" na / nb %d\n", na / nb);
    printf(" na %% nb %d\n", (na % nb));

	return (0);
}