/*
	��̕ӂ̒�����ǂݍ���ŁA
    �����̒����`��\������B
    �����`��`��
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int side1, side2;
    int lside, sside;

	puts("�����`�����܂�");
	printf("side1:"); scanf("%d", &side1);
	printf("side2:"); scanf("%d", &side2);

    if (side1 > side2){
        lside = side1;
        sside = side2;
    } else {
        lside = side2;
        sside = side1;
    }

	for (i = 1; i <= sside; i++) {			/* sside */
		for (j = 1; j <= lside; j++)		/* lside */
		putchar('*');
		putchar('\n');						/* ���s*/
	}
	return 0;
}