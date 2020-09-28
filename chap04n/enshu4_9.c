/*
読み込んだ正の整数だけ＋とーを交互に表示するプログラム
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数はなんこですか？");
	scanf("%d", &no);

    if ( no > 0 ){
	    while (no-- > 0){
            if ( no % 2 )
		        putchar('+');
            else
                putchar('-');
	    //putchar('\n');
        }
    }
	return 0;
}
