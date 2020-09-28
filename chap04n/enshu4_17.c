/*
	読み込んだ正の整数の個数n
    1からnまでの整数値の二乗を表示する
*/

#include <stdio.h>

int main(void)
{
	int i, no;

    do {
		printf("正の整数nを入力してください：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a正でない数を入力しないでください。");
	} while (no <= 0);
    printf("nの値:%d\n", no);
	for (i = 1; i <= no; i++)
        printf("%dの二乗は%d\n",i, i*i); 
	return 0;
}