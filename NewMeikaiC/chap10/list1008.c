/*
	��̎����l����������i���j
*/

#include <stdio.h>

/*--- px��py���w���I�u�W�F�N�g�̒l������ ---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main(void)
{
	double da, db;

	puts("��̎�������͂��Ă��������B");
	printf("�����`�F");  scanf("%lf", &da);
	printf("�����a�F");  scanf("%lf", &db);

	swap(&da, &db);

	puts("�����̒l���������܂����B");
	printf("�����`��%f�ł��B\n", da);
	printf("�����a��%f�ł��B\n", db);

	return 0;
}
