/*
�ǂݍ��񂾌������c�Ɂ���\��
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("���̐����͂Ȃ񂱂ł����H");
	scanf("%d", &no);

    if ( no > 0 ){
	    while (no-- > 0)
        {
		    putchar('*');
	        putchar('\n');
        }
    }
	return 0;
}
