/*
	�����T���i�ԕ��@�j
*/

#include  <stdio.h>

#define	 NUMBER		5
#define	 FAILED		-1

/*--- �ԕ��@�ɂ�钀���T�� ---*/
int search(int vc[], int key, int no)
{
	int	 i = 0;

	vc[no] = key;		/* �ԕ���ǉ� */

	while (1) {
		if (vc[i] == key)
			break;
		i++;
	}

	return (i == no ? FAILED : i);
}

int main(void)
{
	int	 i, ky, idx;
	int	 vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]�F", i);
		scanf("%d", &vx[i]);
	}
	printf("�T���l�F");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FAILED)
		puts("\a�T���Ɏ��s���܂����B");
	else
		printf("%d��%d�Ԗڂɂ���܂��B\n", ky, idx + 1);

	return (0);
}
