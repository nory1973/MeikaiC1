/*
	�z��a�̗v�f���R�s�[����
*/

#include <stdio.h>

#define  NUMBER		5		/* �v�f�� */

/* �z��b�̐擪n�̗v�f��a�ɃR�s�[ */
void cpy_ary(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		a[i] = b[i];
}

int main(void)
{
	int i;
	int v1[NUMBER];			/* �R�s�[�� */
	int v2[NUMBER];			/* �R�s�[�� */

	for (i = 0; i < NUMBER; i++) {
		printf("v1[%d]�F", i);
		scanf("%d", &v1[i]);
	}

	cpy_ary(v2, v1, NUMBER);	/* v1�̑S�v�f��v2�ɃR�s�[ */

	puts("�z��v1�̑S�v�f��v2�ɃR�s�[���܂����B\n");
	for (i = 0; i < NUMBER; i++) {
		printf("v2[%d]�F%d\n", i, v2[i]);
	}

	return 0;
}
