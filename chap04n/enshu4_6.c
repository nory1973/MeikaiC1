/*
	読み込んだ正の整数値までカウントアップ
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

    if (no > 0 ){
	    i = 1;
	    while (i <= no ){
            if ( !(i % 2) ) printf("%d ", i);
            i++;		/* iの値を表示した後にインクリメント */    
            }
        printf("\n");
        }
	return 0;
}
