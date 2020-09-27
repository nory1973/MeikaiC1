/*
	読み込んだ月の季節を表示
*/
#include <stdio.h>

int main(void)
{
	int	 month;			/* 月 */

	printf("何月ですか：");
	scanf("%d", &month);

	switch (month) {
        case 3 :
        case 4 :
        case 5 : puts("春です。"); break;
        case 6 :
        case 7 :
        case 8 : puts("夏です。"); break;
        case 9 :
        case 10 : 
        case 11 : puts("秋です。"); break;
        case 12 :
        case 1 :
        case 2 : puts("冬です。"); break;
        default : puts("そんな月はありませんよ!!\a"); break;
        }
	return (0);
}
//   } >= 3	&&  month <= 5)
//		puts("春です。");
//	else if (month >= 6  &&  month <= 8)
//		puts("夏です。");
//	else if (month >= 9  &&  month <= 11)
//		puts("秋です。");
//	else if (month == 1  ||  month == 2  ||  month == 12)
//		puts("冬です。");
//	else
//		puts("そんな月はありませんよ!!\a");