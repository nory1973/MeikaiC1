/*
	�֐��̈����ƃ|�C���^
*/

#include  <stdio.h>

/*--- �Ђ�q����i180cm�����̐g����L�΂��Ă����j ---*/
void hiroko(int *height)
{
	if (*height < 180)
		*height = 180;
}

int main(void)
{
	int	 sato	= 178;	/* �����G�j�N�̐g�� */
	int	 sanaka	= 175;	/* �����r�ƌN�̐g�� */
	int	 hiraki	= 165;	/* ����Mike�N�̐g�� */
	int	 masaki = 179;	/* �^��G�F�N�̐g�� */

	hiroko(&masaki);

	printf("�����N�̐g���F%d\n", sato);
	printf("�����N�̐g���F%d\n", sanaka);
	printf("���،N�̐g���F%d\n", hiraki);
	printf("�^��N�̐g���F%d\n", masaki);

	return (0);
}
