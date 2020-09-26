/*
	�T�l�̊w����g���̏����Ƀ\�[�g
*/

#include  <stdio.h>

#define  NUMBER		5	/* �w���̐l�� */

typedef struct {
	char   name[20];	/* ���O */
	int    height;		/* �g�� */
	float  weight;		/* �̏d */
	long   schols;		/* ���w�� */
} student;

/*--- x�����y���w���w�������� ---*/
void swap(student *x, student *y)
{
	student  temp = *x;
	*x = *y;
	*y = temp;
}

/*--- �z��data�̐擪n�̗v�f��g���̏����Ƀ\�[�g ---*/
void sort(student data[], int n)
{
	int  k = n - 1;
	while (k >= 0){
		int	 i, j;
		for (i = 1, j = -1; i <= k; i++)
			if (data[i - 1].height > data[i].height) {
				j = i - 1;
				swap(&data[i], &data[j]);
			}
		k = j;
	}
}

int main(void)
{
	int  i;
	student std[] = {
		{ "Sato",   178, 61.0, 80000},	/* �����G�j�N */
		{ "Sanaka", 175, 60.5, 70000},	/* �����r�ƌN */
		{ "Takao",  173, 80.0, 0},		/* �������i�N */
		{ "Mike",   165, 72.0, 70000},	/* ����Mike�N */
		{ "Masaki", 179, 77.5, 70000},	/* �^��G�F�N */
	};

	sort(std, NUMBER);

	puts("-----------------------------");
	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
			std[i].name,  std[i].height, std[i].weight, std[i].schols);
	puts("-----------------------------");

	return (0);
}
