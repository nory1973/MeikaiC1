/*
	��3�͂̂܂Ƃ߁i���̂Q�j�l�ɉ����ĐF��\��
*/

#include <stdio.h>

int main(void)
{
	int sw;

	printf("��������͂��Ă��������F");
	scanf("%d", &sw);

	if (sw >= 1 && sw <= 3) {
		switch (sw) {
		 case 1: printf("��");  break;
		 case 2: printf("��");  break;
		 case 3: printf("��");  break;
		}
		printf("�ł��B\n");
	}

	return 0;
}
