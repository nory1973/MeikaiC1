/*
	�ǂݍ��񂾔񕉂̐����l���t���ɕ\��
*/

#include  <stdio.h>

/*--- �񕉂̐�����ǂݍ���ŕԂ� ---*/
int scan_uint(void)
{
	int	 tmp;

	do {
		printf("�񕉂̐�������͂��Ă��������F");
		scanf("%d", &tmp);
		if (tmp < 0)
			puts("\a���̐�����͂��Ȃ��ł��������B");
	} while (tmp < 0);
	return (tmp);
}

/*--- �񕉂̐������t�]�����l��Ԃ� ---*/
int rev_int(int num)
{
	int	 tmp = 0;

	if (num > 0) {
		do {
			tmp = tmp * 10 + num % 10;
			num /= 10;
		} while (num > 0);
	}
	return (tmp);
}

int main(void)
{
	int	 nx = scan_uint();

	printf("���]�����l��%d�ł��B\n", rev_int(nx));

	return (0);
}
