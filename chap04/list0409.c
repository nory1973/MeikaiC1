/*
	�ǂݍ��񂾐��̐����l�܂ŃJ�E���g�A�b�v
*/

#include  <stdio.h>

int main(void)
{
	int	 i, no;
	
	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	i = 0;
	while (i <= no)
		printf("%d ", i++);		/* i�̒l��\��������ɃC���N�������g */
	putchar('\n');

	return (0);
}
