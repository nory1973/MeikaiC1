/*
	TlΜwΆπg·ΜΈΙ\[g
*/

#include  <stdio.h>

#define  NUMBER		5	/* wΆΜl */

typedef struct {
	char   name[20];	/* ΌO */
	int    height;		/* g· */
	float  weight;		/* Μd */
	long   schols;		/* §wΰ */
} student;

/*--- x¨ζΡyͺw·wΆππ· ---*/
void swap(student *x, student *y)
{
	student  temp = *x;
	*x = *y;
	*y = temp;
}

/*--- zρdataΜζͺnΒΜvfπg·ΜΈΙ\[g ---*/
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
		{ "Sato",   178, 61.0, 80000},	/* ²‘GjN */
		{ "Sanaka", 175, 60.5, 70000},	/* ²rΖN */
		{ "Takao",  173, 80.0, 0},		/* φiN */
		{ "Mike",   165, 72.0, 70000},	/* ½ΨMikeN */
		{ "Masaki", 179, 77.5, 70000},	/* ^θGFN */
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