/*
	�T�l�̊w���́s���O�Ɛg���t��g���̏����Ƀ\�[�g
*/

#include <stdio.h>
#include <string.h>

#define NUMBER		5		/* �w���̐l�� */
#define NAME_LEN	64		/* ���O�̕����� */

/*--- x�����y���w�������̒l������ ---*/
void swap_int(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/*--- sx�����sy���w������������� ---*/
void swap_str(char *sx, char *sy)
{
	char temp[NAME_LEN];

	strcpy(temp, sx);
	strcpy(sx, sy);
	strcpy(sy, temp);
}

/*--- �z��num��str�̐擪n�̗v�f��num�Ɋ�Â��ď����Ƀ\�[�g ---*/
void sort(int num[], char str[][NAME_LEN], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (num[j - 1] > num[j]) {
				swap_int(&num[j - 1], &num[j]);
				swap_str( str[j - 1],  str[j]);
			}
		}
	}
}

int main(void)
{
	int  i;
	int  height[] =         {178,    175,      173,     165,    179};
	char name[][NAME_LEN] = {"Sato", "Sanaka", "Takao", "Mike", "Masaki"};

	for (i = 0; i < NUMBER; i++)
		printf("%2d�F%-8s%4d\n", i + 1, name[i], height[i]);

	sort(height, name, NUMBER);		/* �g���̏����ɐg���Ɩ��O���\�[�g */

	puts("\n�g�����Ƀ\�[�g���܂����B");
	for (i = 0; i < NUMBER; i++)
		printf("%2d�F%-8s%4d\n", i + 1, name[i], height[i]);

	return 0;
}
