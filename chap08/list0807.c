/*
	�ő���񐔂����߂�
*/

#include  <stdio.h>

/*--- vx��vy�̍ő���񐔂�Ԃ��ivx��vy�j ---*/
int gcdf(int vx, int vy)
{
	return (vy == 0 ? vx : gcdf(vy, vx % vy));
}

/*--- va��vb�̍ő���񐔂����߂� ---*/
int gcd(int va, int vb)
{
	return (va > vb ? gcdf(va, vb) : gcdf(vb, va));
}

int main(void)
{
	int	 n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");	  scanf("%d", &n1);
	printf("�����Q�F");	  scanf("%d", &n2);

	printf("�ő���񐔂�%d�ł��B\n", gcd(n1, n2));

	return (0);
}
