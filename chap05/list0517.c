/*
	1000�ȉ��̑f�������߂�i��R�Łj
*/

#include  <stdio.h>

int main(void)
{
	int	 i, no;
	unsigned long  counter = 0;

	no = 2;
	printf("%d\n", no++);					/* �Q�͋����ŗB��̑f���ł��� */

	for ( ; no <= 1000; no += 2) {			/* ��݂̂�ΏۂƂ��� */
		for (i = 3; i < no; i += 2) {		/* ��݂̂Ŋ����Ă݂� */
			counter++;
			if (no % i == 0)				/* ����؂��Ƒf���ł͂Ȃ� */
				break;						/* ����ȏ�̌J�Ԃ��͕s�v */
		}
		if (no == i)						/* �Ō�܂Ŋ���؂�Ȃ����� */
			printf("%d\n", no);
	}

	printf("�揜���s�����񐔁F%lu\n", counter);

	return (0);
}
