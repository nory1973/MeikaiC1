/*
	��̐����l����������i�b++�ɂ��Q�Ɠn���j
*/

#include  <stdio.h>

/*--- nx�Eny���w���I�u�W�F�N�g�̒l������ ---*/
void swap(int& nx, int& ny)
{
	int	 temp = nx;
	nx = ny;
	ny = temp;
}

int main(void)
{
	int	 na, nb;

	puts("��̐�������͂��Ă��������B");
	printf("�����`�F");	  scanf("%d", &na);
	printf("�����a�F");	  scanf("%d", &nb);

	swap(na, nb);

	puts("�����̒l���������܂����B");
	printf("�����`��%d�ł��B\n", na);
	printf("�����a��%d�ł��B\n", nb);

	return (0);
}
