/*
	�|�C���^�ɂ���Đg�����ԐړI�ɑ��삷��
*/

#include  <stdio.h>

int main(void)
{
	int	 sato	= 178;		/* �����G�j�N�̐g�� */
	int	 sanaka	= 175;		/* �����r�ƌN�̐g�� */
	int	 hiraki	= 165;		/* ����Mike�N�̐g�� */
	int	 masaki	= 179;		/* �^��G�F�N�̐g�� */

	int *isako, *hiroko;

	isako  = &sato;			/* isako ��sato�@���w���i�����N���D���j */
	hiroko = &masaki;		/* hiroko��masaki���w���i�^��N���D���j */

	printf("�����q����̍D���Ȑl�̐g���F%d\n", *isako);
	printf("�Ђ�q����̍D���Ȑl�̐g���F%d\n", *hiroko);

	isako = &sanaka;		/* isako ��sanaka���w���i�C���ς�����j */

	*hiroko = 180;			/* hiroko�̎w���I�u�W�F�N�g��180���� */
							/* �Ђ�q����̍D���Ȑl�̐g�������������� */

	putchar('\n');
	printf("�����N�̐g���F%d\n", sato);
	printf("�����N�̐g���F%d\n", sanaka);
	printf("���،N�̐g���F%d\n", hiraki);
	printf("�^��N�̐g���F%d\n", masaki);
	printf("�����q����̍D���Ȑl�̐g���F%d\n", *isako);
	printf("�Ђ�q����̍D���Ȑl�̐g���F%d\n", *hiroko);

	return (0);
}
