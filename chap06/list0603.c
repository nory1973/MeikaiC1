/*
	��̐����̓��̍������߂�
*/

#include  <stdio.h>

/*--- ���l��Ԃ� ---*/
int sqr(int x)
{
	return (x * x);
}

/*--- ����Ԃ� ---*/
int diff(int x, int y)
{
	return (x > y ? x - y : y - x);
}

int main(void)
{
	int	 kx, ky, kx2, ky2;

	puts("��̐�������͂��Ă��������B");
	printf("����kx�F");	  scanf("%d", &kx);
	printf("����ky�F");	  scanf("%d", &ky);

	kx2 = sqr(kx);		/* kx�̓�� */
	ky2 = sqr(ky);		/* ky�̓�� */
	printf("kx�̓���ky�̓��̍���%d�ł��B\n", diff(kx2, ky2));

	return (0);
}
