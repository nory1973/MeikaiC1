/*
	�ǂݍ��񂾌��̋G�߂�\��
*/
#include <stdio.h>

int main(void)
{
	int	 month;			/* �� */

	printf("�����ł����F");
	scanf("%d", &month);

	switch (month) {
        case 3 :
        case 4 :
        case 5 : puts("�t�ł��B"); break;
        case 6 :
        case 7 :
        case 8 : puts("�Ăł��B"); break;
        case 9 :
        case 10 : 
        case 11 : puts("�H�ł��B"); break;
        case 12 :
        case 1 :
        case 2 : puts("�~�ł��B"); break;
        default : puts("����Ȍ��͂���܂����!!\a"); break;
        }
	return (0);
}
//   } >= 3	&&  month <= 5)
//		puts("�t�ł��B");
//	else if (month >= 6  &&  month <= 8)
//		puts("�Ăł��B");
//	else if (month >= 9  &&  month <= 11)
//		puts("�H�ł��B");
//	else if (month == 1  ||  month == 2  ||  month == 12)
//		puts("�~�ł��B");
//	else
//		puts("����Ȍ��͂���܂����!!\a");