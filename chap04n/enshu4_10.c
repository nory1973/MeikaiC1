/*
読み込んだ個数だけ縦に＊を表示
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数はなんこですか？");
	scanf("%d", &no);

    if ( no > 0 ){
	    while (no-- > 0)
        {
		    putchar('*');
	        putchar('\n');
        }
    }
	return 0;
}
