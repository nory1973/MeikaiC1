/*
	�����l�����X�Ɠǂݍ���ō��v�ƕ��ς�\���i���̂Q�j
	������������Z�q�ƌ�u�������Z�q�𗘗p
*/

#include <stdio.h>

int main(void)
{
	int sum = 0;	/* ���v */
	int cnt = 0;	/* �����l�̌� */
	int retry;		/* �����𑱂��邩 */

	do {
		int t;

		printf("�����l����͂��Ă��������F");
		scanf("%d", &t);

		sum += t;	 /* sum��t�������� */
		cnt++;		 /* cnt���C���N�������g���� */

		printf("�܂��H<Yes�c0/No�c9>�F");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("���v��%d�ŕ��ς�%.2f�ł��B\n", sum, (double)sum / cnt);

	return 0;
}
