/*
	�w���̓_����ǂݍ���ŏ����Ƀ\�[�g
*/

#include <stdio.h>

#define NUMBER	5		/* �l�� */

/*--- px��py���w���I�u�W�F�N�g�̒l������ ---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

/*--- �o�u���\�[�g ---*/
void bsort(int a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
		for (j = n - 1; j > i; j--)
			if (a[j - 1] > a[j])
				swap(&a[j], &a[j - 1]);
}

int main(void)
{
	int i;
	int point[NUMBER];		/* NUMBER�l�̊w���̓_�� */

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d�ԁF", i + 1);
		scanf("%d", &point[i]);
	}

	bsort(point, NUMBER);		/* �\�[�g */

	puts("�����Ƀ\�[�g���܂����B");
	for (i = 0; i < NUMBER; i++)
		printf("%2d�ԁF%d\n", i + 1, point[i]);

	return 0;
}
