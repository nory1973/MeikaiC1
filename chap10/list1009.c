/*
	��̎����l����������i�ԈႦ�j
*/

#include  <stdio.h>

/*--- nx�Eny���w���I�u�W�F�N�g�̒l������ ---*/
void swap(int *nx, int *ny)
{
	int	 temp = *nx;
	*nx = *ny;
	*ny = temp;
}

int main(void)
{
	double	dx, dy;

	puts("��̎�������͂��Ă��������B");
	printf("�����w�F");	  scanf("%lf", &dx);
	printf("�����x�F");	  scanf("%lf", &dy);

	swap(&dx, &dy);

	puts("�����̒l���������܂����B");
	printf("�����w��%f�ł��B\n", dx);
	printf("�����x��%f�ł��B\n", dy);

	return (0);
}
