/*
�ǂݍ��񂾐��̐��������{�Ɓ[�����݂ɕ\������v���O����
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("���̐����͂Ȃ񂱂ł����H");
	scanf("%d", &no);

    if ( no > 0 ){
	    while (no-- > 0){
            if ( no % 2 )
		        putchar('+');
            else
                putchar('-');
	    //putchar('\n');
        }
    }
	return 0;
}
