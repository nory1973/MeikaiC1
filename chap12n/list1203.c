/*
	�w����\���\���̂ɂ�鍂���N
*/

#include <stdio.h>

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
	struct student takao = {"Takao", 173, 86.2};

	printf("���@�� �� %s\n",   takao.name);
	printf("�g�@�� �� %d\n",   takao.height);
	printf("�́@�d �� %.1f\n", takao.weight);
	printf("���w�� �� %ld\n",  takao.schols);

	return 0;
}
