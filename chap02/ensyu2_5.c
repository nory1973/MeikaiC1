/*
	��̐����l��ǂݍ���őO�҂���҂̉����ł��邩�������ŕ\������v���O����
*/

#include  <stdio.h>

int main(void)
{
	int	 na, nb;

	puts("��̐�������͂��Ă��������B");
	printf("�����`�F");	  scanf("%d", &na);
	printf("�����a�F");	  scanf("%d", &nb);

	printf("����A�͐���B��%f%%�ł��B\n", (double)( na * 100 / nb ));	/* �L���X�g */

	return (0);
}
