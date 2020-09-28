/*
	読み込んだ整数値の符号を判定
    do while version
*/


#include <stdio.h>

int main(void)
{
	int retry;		/* 処理を続けるか */

	do {
	int no;

        printf("整数を入力してください：");
        scanf("%d", &no);

        if (no == 0)
            puts("その数は０です。");
        else if (no > 0)
            puts("その数は正です。");
        else
            puts("その数は負です。");

        printf("もう一度？【Yes…0／No…9】：");
        scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
