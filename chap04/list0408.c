/*
	�ǂݍ��񂾐����l���O�܂ŃJ�E���g�_�E���i���Łj
*/

#include  <stdio.h>

int main(void)
{
	int	 no;
	
	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	while (no >= 0)
		printf("%d ", no--);	/* no�̒l��\��������Ƀf�N�������g */
	putchar('\n');

	return (0);
}
