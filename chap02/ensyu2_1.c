/*
	��̐����l��ǂݍ���őO�҂̒l����҂̉����ł��邩��\������v���O����
*/

#include  <stdio.h>

int main(void)
{
	int	 na, nb;

	puts("��̐�������͂��Ă��������B");
	printf("�����`�F");	  scanf("%d", &na);
	printf("�����a�F");	  scanf("%d", &nb);

	printf("�`�͂a��%d%%�ł��B\n", (na * 100) / nb);

	return (0);
}
