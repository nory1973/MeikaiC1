/*
	�����T��
*/

#include  <stdio.h>

#define	 NUMBER		5
#define	 FAILED		-1

/*--- �v�f��no�̔z��vc����key�ƈ�v����v�f��T�� ---*/
int search(const int vc[], int key, int no)
{
	int	 i = 0;

	while (1) {
		if (i == no)
			return (FAILED);		/* �T�����s */
		if (vc[i] == key)
			return (i);				/* �T������ */
		i++;
	}
}

int main(void)
{
	int	 i, ky, idx;
	int	 vx[NUMBER];

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
