/*
	�ǂݍ��񂾐��̐����̌�����
    1234567890���J��Ԃ��\�������\��
*/

#include <stdio.h>

int main(void)
{
	int i, no, num;

    do {
		printf("���̐�������͂��Ă��������F");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a���łȂ�������͂��Ȃ��ł��������B");
	} while (no <= 0);
	for (i = 1; i <= no; i++){
        num = i%10;
        printf("%d", num);
    }
	return 0;
}