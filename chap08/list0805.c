/*
	�I�΂ꂽ�����̖�����\��
*/

#include  <stdio.h>

enum animal  { Dog, Cat, Monkey, Invalid };

/*--- ������ ---*/
void dog(void)
{
	puts("��������!!");
}

/*--- �L���� ---*/
void cat(void)
{
	puts("�j���`�I!!");
}

/*--- ������ ---*/
void monkey(void)
{
	puts("�L�b�L�b!!");
}

/*--- ������I�� ---*/
enum animal select(void)
{
	int	 tmp;

	do {
		printf("�O�c���@�P�c�L�@�Q�c���@�R�c�I���F");
		scanf("%d", &tmp);
	} while (tmp < Dog	||	tmp > Invalid);
	return (tmp);
}

int main(void)
{
	enum animal	 selected;

	do {
		switch (selected = select()) {
		 case Dog	 : dog();	 break;
		 case Cat	 : cat();	 break;
		 case Monkey : monkey(); break;
		}
	} while (selected != Invalid);

	return (0);
}
