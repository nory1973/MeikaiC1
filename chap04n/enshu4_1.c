/*
	�ǂݍ��񂾐����l�̕����𔻒�
    do while version
*/


#include <stdio.h>

int main(void)
{
	int retry;		/* �����𑱂��邩 */

	do {
	int no;

        printf("��������͂��Ă��������F");
        scanf("%d", &no);

        if (no == 0)
            puts("���̐��͂O�ł��B");
        else if (no > 0)
            puts("���̐��͐��ł��B");
        else
            puts("���̐��͕��ł��B");

        printf("������x�H�yYes�c0�^No�c9�z�F");
        scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
