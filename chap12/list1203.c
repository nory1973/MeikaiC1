/*
	�w����\���\���̂ŕ\���������N
*/

#include  <stdio.h>
#include  <string.h>

struct gstudent {
	char   name[20];	/* ���O */
	int    height;		/* �g�� */
	float  weight;		/* �̏d */
	long   schols;		/* ���w�� */
};

int main(void)
{
	struct gstudent  sanaka;

	strcpy(sanaka.name, "Sanaka");	/* ���O */
	sanaka.height = 175;			/* �g�� */
	sanaka.weight = 60.5;			/* �̏d */
	sanaka.schols = 70000;			/* ���w�� */

	printf("���@�� �� %s\n",  sanaka.name);
	printf("�g�@�� �� %d\n",  sanaka.height);
	printf("�́@�d �� %f\n",  sanaka.weight);
	printf("���w�� �� %ld\n", sanaka.schols);

	return (0);
}
