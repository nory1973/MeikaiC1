/*
	�ǂݍ��񂾐��̐����l�܂ŃJ�E���g�A�b�v
*/

#include <stdio.h>

int main(void)
{
	int no, no2;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);
    if (no > 0 ){
        no2 = 1;
	    while ( no2 <= no ){
            no2 = no2*2;
            if (no2 <= no)
            printf("%5d", no2); 
        }
        printf("\n");
    }
	return 0;
}
