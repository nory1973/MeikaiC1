/*
	��̐����l����������
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
	int na, nb;

	puts("��̐�������͂��Ă��������B");
	printf("�����`�F");   scanf("%d", &na);
	printf("�����a�F");   scanf("%d", &nb);

	swap(&na, &nb);

	puts("�����̒l���������܂����B");
	printf("�����`��%d�ł��B\n", na);
	printf("�����a��%d�ł��B\n", nb);

	return 0;
}
