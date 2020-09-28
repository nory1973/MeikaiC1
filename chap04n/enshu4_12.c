/*
	読み込んだ正の整数値を逆順に表示
*/

#include <stdio.h>

int main(void)
{
	int no, i, inum;

	do {
		printf("正の整数を入力してください：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a正でない数を入力しないでください。");
	} while (no <= 0);
    inum = no;
	/* noは0より大きくなっている */
	i = 0;
    printf("%dhは", inum);
	while (no > 0) {
		//printf("%d", no % 10);		/* 最下位の桁の値を表示 */ 
		no /= 10;                      /* 右に１桁ずらす */
        i++;					
	}
	printf("%d桁です。", i);

	return 0;
}
