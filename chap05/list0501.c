/*
	�T�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��
*/

#include  <stdio.h>

int main(void)
{
	int	 uchida;		/* ���c�N�̓_�� */
	int	 satoh;			/* �����N�̓_�� */
	int	 sanaka;		/* �����N�̓_�� */
	int	 hiraki;		/* ���،N�̓_�� */
	int	 masaki;		/* �^��N�̓_�� */
	int	 sum = 0;		/* ���v�_ */

	puts("�_������͂��Ă��������B");
	printf("�P�ԁF");	scanf("%d", &uchida);
	printf("�Q�ԁF");	scanf("%d", &satoh);
	printf("�R�ԁF");	scanf("%d", &sanaka);
	printf("�S�ԁF");	scanf("%d", &hiraki);
	printf("�T�ԁF");	scanf("%d", &masaki);

	sum += uchida;
	sum += satoh;
	sum += sanaka;
	sum += hiraki;
	sum += masaki;

	printf("���v�_�F%5d\n", sum);
	printf("���ϓ_�F%5.1f\n", (double)sum / 5);

	return (0);
}
