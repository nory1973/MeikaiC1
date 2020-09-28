/*
	読み込んだ正の整数の個数だけ
    1234567890を繰り返し表示するを表示
*/

#include <stdio.h>

int main(void)
{
	int i, no, num;

    do {
		printf("正の整数を入力してください：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a正でない数を入力しないでください。");
	} while (no <= 0);
	for (i = 1; i <= no; i++){
        num = i%10;
        printf("%d", num);
    }
	return 0;
}