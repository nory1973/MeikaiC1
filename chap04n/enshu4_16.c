/*
	�ǂݍ��񂾐��̐����ȉ��̋�������ъ��\��
*/

#include <stdio.h>

int main(void)
{
	int i, j, no;

    do {
		printf("���̐�������͂��Ă��������F");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a���łȂ�������͂��Ȃ��ł��������B");
	} while (no <= 0);
    
	for (i = 1; i <= no; i++)   //�����\��
        if( i % 2 == 0 )
		//if( !(i % 2) )
         printf("%5d", i);
		 printf("\n");
	for (j = 1; j <= no; j++)    //��\��
        if( j % 2 != 0 )
		//if( !(i % 2) )
         printf("%5d", j);
	return 0;
}