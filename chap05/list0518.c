/*
	1000�ȉ��̑f�������߂�i��S�Łj
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

	for (no = 5 ; no <= 1000; no += 2) {	/* ��݂̂�ΏۂƂ��� */
		for (i = 1; i < ptr; i++) {			/* ���ɓ���ꂽ�f���Ŋ����Ă݂� */
			counter++;
			if (no % prime[i] == 0)			/* ����؂��Ƒf���ł͂Ȃ� */
				break;						/* ����ȏ�̌J�Ԃ��͕s�v */
		}
		if (ptr == i)						/* �Ō�܂Ŋ���؂�Ȃ����� */
			prime[ptr++] = no;				/* �z��ɓo�^ */
	}

	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);

	printf("�揜���s�����񐔁F%lu\n", counter);

	return (0);
}
