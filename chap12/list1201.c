/*
	�T�l�̊w���́s�g���t�������Ƀ\�[�g
*/

#include  <stdio.h>

#define  NUMBER		5	/* �w���̐l�� */

/*--- x�����y���w�������̒l������ ---*/
void swap(int *x, int *y)
{
	int	 temp = *x;
	*x = *y;
	*y = temp;
}

/*--- �z��data�̐擪n�̗v�f�������Ƀ\�[�g ---*/
void sort(int data[], int n)
{
	int  k = n - 1;
	while (k >= 0){
		int	 i, j;
		for (i = 1, j = -1; i <= k; i++)
			if (data[i - 1] > data[i]) {
				j = i - 1;
				swap(&data[i], &data[j]);
			}
		k = j;
	}
}

int main(void)
{
	int  i;
	int  height[] = {178, 175, 173, 165, 179};

	sort(height, NUMBER);

	for (i = 0; i < NUMBER; i++)
		printf("%2d�F%4d\n", i + 1, height[i]);

	return (0);
}
