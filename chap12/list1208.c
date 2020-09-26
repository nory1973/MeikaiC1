/*
	５人の学生を身長の昇順にソート
*/

#include  <stdio.h>

#define  NUMBER		5	/* 学生の人数 */

typedef struct {
	char   name[20];	/* 名前 */
	int    height;		/* 身長 */
	float  weight;		/* 体重 */
	long   schols;		/* 奨学金 */
} student;

/*--- xおよびyが指す学生を交換 ---*/
void swap(student *x, student *y)
{
	student  temp = *x;
	*x = *y;
	*y = temp;
}

/*--- 配列dataの先頭n個の要素を身長の昇順にソート ---*/
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
		{ "Sato",   178, 61.0, 80000},	/* 佐藤宏史君 */
		{ "Sanaka", 175, 60.5, 70000},	/* 佐中俊哉君 */
		{ "Takao",  173, 80.0, 0},		/* 高尾健司君 */
		{ "Mike",   165, 72.0, 70000},	/* 平木Mike君 */
		{ "Masaki", 179, 77.5, 70000},	/* 真崎宏孝君 */
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