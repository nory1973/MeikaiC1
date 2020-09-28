/*
	二つの整数値を読み込んで
    小さい方の整数以上、
    大きい方の整数以下の全整数を加えた値を表示
*/

#include <stdio.h>

int main(void)
{
    int retry;
    do {
        int sum = 0;	/* 合計 */
        int cnt = 0;	/* 整数値の個数 */
        int na, nb;
        int dai;

        printf("整数値を二つを入力してください。\n");
        printf("整数値A：");scanf("%d", &na);
        printf("整数値B：");scanf("%d", &nb);

        cnt = na >= nb ? na - nb : nb - na;
        printf("cnt：%d\n", cnt);
        dai = na >= nb ? na : nb; 
        printf("dai：%d\n", dai);
        
        do {
            sum += dai - cnt;
    //      sum = sum + dai - cnt; 
            printf("sum：%d\n", sum);
            cnt--;
    //      cnt = cnt - 1;	 
            printf("cnt：%d\n", cnt);
        } while (cnt >= 0);
    //   } while (cnt != -1);

        printf("合計は%dです。\n", sum);
		printf("まだ？<Yes…0/No…9>：");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
