/*
	�ǂݍ��񂾓�̐����l�̘a�����߂ĕ\��
*/

#include  <stdio.h>

int main(void)
{
	int  n1, n2, n3;
	int  wa;			/* �a */

	puts("�R�̐�������͂��Ă��������B");
	printf("�����P�F");	  scanf("%d", &n1);
	printf("�����Q�F");	  scanf("%d", &n2);
    printf("�����R�F");	  scanf("%d", &n3);

	wa = n1 + n2 + n3;								/* n1��n2�̘a��wa�ɑ�� */

	printf("�����̘a��%d�ł��B\n", wa);		/* �a��\�� */

	return (0);
}
