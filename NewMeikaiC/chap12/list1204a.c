/*
	���\�͂��������Ђ�q����i�ʉ��F�A���[���Z�q�𗘗p�j
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

/*--- std���w���w���̐g����180cm�܂ŐL�΂��đ̏d��80kg�܂Ō��炷 ---*/
void hiroko(struct student *std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight >  80) std->weight =  80;
}

int main(void)
{
	struct student sanaka = {"Sanaka", 175, 62.5, 73000};

	hiroko(&sanaka);

	printf("���@�� �� %s\n",   sanaka.name);
	printf("�g�@�� �� %d\n",   sanaka.height);
	printf("�́@�d �� %.1f\n", sanaka.weight);
	printf("���w�� �� %ld\n",  sanaka.schols);

	return 0;
}
