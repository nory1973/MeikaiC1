/*
	二つの整数を読込、後者が前者の約数かどうかを判定する
*/

#include  <stdio.h>

int main(void)
{
	int	 va, vb;

	printf("整数を入力してください：");
    printf("整数A："); scanf("%d", &va);
    printf("整数B："); scanf("%d", &vb);

	if (va % vb){
		puts("後者(整数B)は前者(整数A)の約数ではありません。");
        printf("%d", va%vb);
    }else{
        puts("後者(整数B)は前者(整数A)の約数です。");
        printf("%d", va%vb);
	return (0);
    }
}
