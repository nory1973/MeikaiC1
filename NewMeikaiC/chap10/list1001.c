/*
	��̐����̘a�ƍ������߂�i�ԈႢ�j
*/

#include <stdio.h>

/*--- n1��n2�̘a�ƍ���sum��diff�Ɋi�[�i�ԈႢ�j---*/
void sum_diff(int n1, int n2, int sum, int diff)
{ 
	sum  = n1 + n2;							/* �a */
	diff = (n1 > n2) ? n1 - n2 : n2 - n1;	/* �� */
}

int main(void)
{
	int na, nb;
	int wa = 0, sa = 0;

	puts("��̐�������͂��Ă��������B");
	printf("�����`�F");   scanf("%d", &na);
	printf("�����a�F");   scanf("%d", &nb);

	sum_diff(na, nb, wa, sa);

	printf("�a��%d�ō���%d�ł��B\n", wa, sa);

	return 0;
}
