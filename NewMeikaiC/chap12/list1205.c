/*
	���\�͂��������Ђ�q����i�\���̂�typedef���𓱓��j
*/

#include <stdio.h>

#define NAME_LEN	64		/* ���O�̕����� */

/*=== �w����\���\���� ===*/
typedef struct student {
	char  name[NAME_LEN];	/* ���O */
	int   height;			/* �g�� */
	float weight;			/* �̏d */
	long  schols;			/* ���w�� */
} Student;

/*--- std���w���w���̐g����180cm�܂ŐL�΂��đ̏d��80kg�܂Ō��炷 ---*/
void hiroko(Student *std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight >  80) std->weight =  80;
}

int main(void)
{
	Student sanaka = {"Sanaka", 175, 62.5, 73000};

	hiroko(&sanaka);

	printf("���@�� �� %s\n",   sanaka.name);
	printf("�g�@�� �� %d\n",   sanaka.height);
	printf("�́@�d �� %.1f\n", sanaka.weight);
	printf("���w�� �� %ld\n",  sanaka.schols);

	return 0;
}
