/*
	�z��̑S�v�f�̕��ς������ŋ��߂�
*/

#include <stdio.h>

#define  NUMBER		5		/* �v�f�� */

/* �z��a�̑S�v�f�̕��ς������ŕԂ� */
double ave_ary(const int a[], int n)
{
	int i;
	double sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];
	return sum / n;
}

int main(void)
{
	int i;
	int v[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("v[%d]�F", i);
		scanf("%d", &v[i]);
	}

	printf("�S�v�f�̕��ϒl��%.1f�ł��B\n", ave_ary(v, NUMBER));

	return 0;
}
