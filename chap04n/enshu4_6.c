/*
	�ǂݍ��񂾐��̐����l�܂ŃJ�E���g�A�b�v
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

    if (no > 0 ){
	    i = 1;
	    while (i <= no ){
            if ( !(i % 2) ) printf("%d ", i);
            i++;		/* i�̒l��\��������ɃC���N�������g */    
            }
        printf("\n");
        }
	return 0;
}
