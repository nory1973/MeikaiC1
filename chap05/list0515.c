/*
	1000�ȉ��̑f�������߂�i��P�Łj
*/

#include  <stdio.h>

int main(void)
{
	int	 i, no;
	unsigned long  counter = 0;

	for (no = 2; no <= 1000; no++) {
		for (i = 2; i < no; i++) {
			counter++;
			if (no % i == 0)	/* ����؂��Ƒf���ł͂Ȃ� */
				break;			/* ����ȏ�̌J�Ԃ��͕s�v */
		}
		if (no == i)			/* �Ō�܂Ŋ���؂�Ȃ����� */
			printf("%d\n", no);
	}

	printf("�揜���s�����񐔁F%lu\n", counter);

	return (0);
}
