/*
	�ǂݍ��񂾐��̐����l���t���ɕ\��
*/

#include <stdio.h>

int main(void)
{
	int no, i, inum;

	do {
		printf("���̐�������͂��Ă��������F");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a���łȂ�������͂��Ȃ��ł��������B");
	} while (no <= 0);
    inum = no;
	/* no��0���傫���Ȃ��Ă��� */
	i = 0;
    printf("%dh��", inum);
	while (no > 0) {
		//printf("%d", no % 10);		/* �ŉ��ʂ̌��̒l��\�� */ 
		no /= 10;                      /* �E�ɂP�����炷 */
        i++;					
	}
	printf("%d���ł��B", i);

	return 0;
}