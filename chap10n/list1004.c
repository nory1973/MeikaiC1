/*
	�|�C���^�ɂ���Đg�����ԐړI�ɑ��삷��
*/

#include <stdio.h>

/*--- �Ђ�q����i180cm�����̐g����180cm�ɐL�΂��j---*/
void hiroko(int *height)
{
	if (*height < 180)
		*height = 180;
}

int main(void)
{
	int sato   = 178;		/* �����G�j�N�̐g�� */
	int sanaka = 175;		/* �����r�ƌN�̐g�� */
	int masaki = 179;		/* �^��G�F�N�̐g�� */

	hiroko(&masaki);

	printf("�����N�̐g���F%d\n", sato);
	printf("�����N�̐g���F%d\n", sanaka);
	printf("�^��N�̐g���F%d\n", masaki);

	return 0;
}
