/*
	�w�����ꂽ������������ǂݍ���ō��v�l�E���ϒl��\���ifor���j
*/

#include  <stdio.h>

int main(void)
{
	int	 i;
	int	 sum = 0;			/* ���v�l */
	int  num, tmp;

	printf("�����͉��ł����F");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		printf("No.%d�F", i + 1);
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("���v�l�F%d\n", sum);
	printf("���ϒl�F%.2f\n", (double)sum / num);

	return (0);
}
