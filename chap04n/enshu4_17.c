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
    printf("n�̒l:%d\n", no);
	for (i = 1; i <= no; i++)
        printf("%d�̓���%d\n",i, i*i); 
	return 0;
}