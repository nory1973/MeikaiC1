/*
	�ǂݍ��񂾐��̐����̌�n
    1����n�܂ł̐����l�̓���\������
*/

#include <stdio.h>

int main(void)
{
	int i, no;

    do {
		printf("���̐���n����͂��Ă��������F");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a���łȂ�������͂��Ȃ��ł��������B");
	} while (no <= 0);
    printf("���̐���n�F%d\n", no);
	for (i = 1; i <= no; i++)
        if ( i%5 )
        putchar('*');
        else{
        putchar('*');
        putchar('\n');
        }
	return 0;
}