/*
	�w����\���\���̂ŕ\���������N��������
*/

#include  <stdio.h>

struct gstudent {
	char   name[20];	/* ���O */
	int    height;		/* �g�� */
	float  weight;		/* �̏d */
	long   schols;		/* ���w�� */
};

int main(void)
{
	struct gstudent  sanaka  = {"Sanaka", 175, 60.5};

	printf("���@�� �� %s\n",  sanaka.name);
	printf("�g�@�� �� %d\n",  sanaka.height);
	printf("�́@�d �� %f\n",  sanaka.weight);
	printf("���w�� �� %ld\n", sanaka.schols);

	return (0);
}
