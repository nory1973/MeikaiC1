/*
	読み込んだ正の整数以下の偶数および奇数を表示
*/

#include <stdio.h>

int main(void)
{
	int i, j, no;

    do {
		printf("正の整数を入力してください：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a正でない数を入力しないでください。");
	} while (no <= 0);
    
	for (i = 1; i <= no; i++)   //偶数表示
        if( i % 2 == 0 )
		//if( !(i % 2) )
         printf("%5d", i);
		 printf("\n");
	for (j = 1; j <= no; j++)    //奇数表示
        if( j % 2 != 0 )
		//if( !(i % 2) )
         printf("%5d", j);
	return 0;
}