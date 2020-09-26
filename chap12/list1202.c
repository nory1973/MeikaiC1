/*
	５人の学生の《名前と身長》を身長の昇順にソート
*/

#include  <stdio.h>
#include  <string.h>

#define  NUMBER		5	/* 学生の人数 */

/*--- xおよびyが指す整数の値を交換 ---*/
void swap(int *x, int *y)
{
	int	 temp = *x;
	*x = *y;
	*y = temp;
}

/*--- sxおよびsyが指す文字列を交換 ---*/
void swaps(char sx[], char sy[])
{
	char temp[256];

	strcpy(temp, sx);
	strcpy(sx, sy);
	strcpy(sy, temp);
}

/*--- 配列dataとnameの先頭n個の要素を昇順にソート ---*/
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
		printf("%2d：%-8s%4d\n", i + 1, name[i], height[i]);

	return (0);
}
