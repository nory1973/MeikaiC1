/*
	読み込んだ正の整数の個数だけ＊を表示
*/

#include <stdio.h>

int main(void)
{
	int i, no, sum;

    do {
		printf("正の整数を入力してください：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a正でない数を入力しないでください。");
	} while (no <= 0);
    sum = 0;
	for (i = 1; i <= no; i++)
        sum += i; 
    printf("1から%dまでの和は%dです。", i-1, sum);
	return 0;
}