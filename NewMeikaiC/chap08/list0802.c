/*
	�����̂Q��ƕ��������_���̂Q��i�֐��`���}�N���j
*/

#include <stdio.h>

#define sqr(x)  ((x) * (x))		/* x�̂Q��l�����߂�֐��`���}�N�� */

int main(void)
{
	int    n;
	double x;

	printf("��������͂��Ă��������F");
	scanf("%d", &n);
	printf("���̐��̂Q���%d�ł��B\n", sqr(n));

	printf("��������͂��Ă��������F");
	scanf("%lf", &x);
	printf("���̐��̂Q���%f�ł��B\n", sqr(x));

	return 0;
}
