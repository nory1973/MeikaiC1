/*
	��̐����l�������ɕ��ׂ�
*/

#include  <stdio.h>

/*--- nx�Eny���w���I�u�W�F�N�g�̒l������ ---*/
void swap(int *nx, int *ny)
{
	int	 temp = *nx;
	*nx = *ny;
	*ny = temp;
}

/*--- *n1��*n2�ƂȂ�悤�ɕ��ׂ� ---*/
void sort2(int *n1, int *n2)
{
	if (*n1 > *n2)
		swap(n1, n2);
}

int main(void)
{
	int	 na, nb;

	puts("��̐�������͂��Ă��������B");
	printf("�����`�F");	  scanf("%d", &na);
	printf("�����a�F");	  scanf("%d", &nb);

	sort2(&na, &nb);

	puts("�����̒l�������ɕ��ׂ܂����B");
	printf("�����`��%d�ł��B\n", na);
	printf("�����a��%d�ł��B\n", nb);

	return (0);
}
