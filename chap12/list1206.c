/*
	���\�͂��������Ђ�q����i���̂Q�j
*/

#include  <stdio.h>

/*--- �w����\���\���� ---*/
typedef struct {
	char   name[20];	/* ���O */
	int    height;		/* �g�� */
	float  weight;		/* �̏d */
	long   schols;		/* ���w�� */
} student;

/*--- �g����L�΂��̏d�����炵�Ă����Ђ�q���� ---*/
void hiroko(student *std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight >  80) std->weight =  80;
}

int main(void)
{
	student  sanaka  = {"Sanaka", 175, 60.5, 70000};

	hiroko(&sanaka);

	printf("���@�� �� %s\n",  sanaka.name);
	printf("�g�@�� �� %d\n",  sanaka.height);
	printf("�́@�d �� %f\n",  sanaka.weight);
	printf("���w�� �� %ld\n", sanaka.schols);

	return (0);
}
