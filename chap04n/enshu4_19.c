/*
�ǂݍ��񂾐��̐����l�̖񐔂�\������
*/
#include <stdio.h>

int main(void)
{
	int i, n, j;

	printf("�����̒l:");
	scanf("%d", &n);
    j = 0;
	for (i = 1; i <= n; i++)
		if (n % i == 0){
			printf("%d\n", i);
            j++;
            }
	printf("�񐔂̌���%d�ł��B\n", j);
	return 0;
}
