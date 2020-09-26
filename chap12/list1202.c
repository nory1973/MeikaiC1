/*
	�T�l�̊w���́s���O�Ɛg���t��g���̏����Ƀ\�[�g
*/

#include  <stdio.h>
#include  <string.h>

#define  NUMBER		5	/* �w���̐l�� */

/*--- x�����y���w�������̒l������ ---*/
void swap(int *x, int *y)
{
	int	 temp = *x;
	*x = *y;
	*y = temp;
}

/*--- sx�����sy���w������������� ---*/
void swaps(char sx[], char sy[])
{
	char temp[256];

	strcpy(temp, sx);
	strcpy(sx, sy);
	strcpy(sy, temp);
}

/*--- �z��data��name�̐擪n�̗v�f�������Ƀ\�[�g ---*/
void sort(int data[], char name[][20], int n)
{
	int  k = n - 1;
	while (k >= 0){
		int	 i, j;
		for (i = 1, j = -1; i <= k; i++)
			if (data[i - 1] > data[i]) {
				j = i - 1;
				swap(&data[i], &data[j]);
				swaps(name[i], name[j]);
			}
		k = j;
	}
}

int main(void)
{
	int   i;
	int   height[] = {178, 175, 173, 165, 179};
	char  name[][20] = {"Sato", "Sanaka", "Takao", "Mike", "Masaki"};

	sort(height, name, NUMBER);

	for (i = 0; i < NUMBER; i++)
		printf("%2d�F%-8s%4d\n", i + 1, name[i], height[i]);

	return (0);
}
