/*
	�w����\���\���̂ɂ�鍲���N
*/

#include <stdio.h>
#include <string.h>

#define NAME_LEN	64		/* ���O�̕����� */

/*=== �w����\���\���� ===*/
struct student {
	char  name[NAME_LEN];	/* ���O */
	int   height;			/* �g�� */
	float weight;			/* �̏d */
	long  schols;			/* ���w�� */
};

int main(void)
{
	struct student sanaka;

	strcpy(sanaka.name, "Sanaka");	/* ���O */
	sanaka.height = 175;			/* �g�� */
	sanaka.weight = 62.5;			/* �̏d */
	sanaka.schols = 73000;			/* ���w�� */

	printf("���@�� �� %s\n",   sanaka.name);
	printf("�g�@�� �� %d\n",   sanaka.height);
	printf("�́@�d �� %.1f\n", sanaka.weight);
	printf("���w�� �� %ld\n",  sanaka.schols);

	return 0;
}
