/*
	1000�ȉ��̑f�������߂�i��T�Łj
*/

#include  <stdio.h>

int main(void)
{
	int	 i, no;
	int	 prime[500];						/* �f�����i�[����z�� */
	int	 ptr = 0;							/* ���ɓ���ꂽ�f���̌� */
	unsigned long  counter = 0;

	prime[ptr++] = 2;						/* �Q�͑f���ł��� */
	prime[ptr++] = 3;						/* �R���f���ł��� */

	for (no = 5; no <= 1000; no += 2) {
		int	 flag = 0;
		for (i = 1; counter++, prime[i] * prime[i] <= no; i++) {
			counter++;
			if (no % prime[i] == 0) {		/* ����؂��Ƒf���ł͂Ȃ� */
				flag = 1;
				break;						/* ����ȏ�̌J�Ԃ��͕s�v */
			}
		}
		if (!flag)							/* �Ō�܂Ŋ���؂�Ȃ����� */
			prime[ptr++] = no;				/* �z��ɓo�^ */
	}

	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);

	printf("�揜���s�����񐔁F%lu\n", counter);

	return (0);
}
