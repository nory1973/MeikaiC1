/*
	�ǂݍ��񂾐��̐����̌���������\��
*/

#include <stdio.h>

int main(void)
{
	int i, no, sum;

    do {
		printf("���̐�������͂��Ă��������F");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a���łȂ�������͂��Ȃ��ł��������B");
	} while (no <= 0);
    sum = 0;
	for (i = 1; i <= no; i++)
        sum += i; 
    printf("1����%d�܂ł̘a��%d�ł��B", i-1, sum);
	return 0;
}