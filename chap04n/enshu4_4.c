/*
	�ǂݍ��񂾐����l���O�܂ŃJ�E���g�_�E���i���̂Q�j
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	while (no >= 1){
		printf("%d ", no--);	/* no�̒l��\��������Ƀf�N�������g */
		printf("\n");				/* ���s */
	}
	return 0;
}
