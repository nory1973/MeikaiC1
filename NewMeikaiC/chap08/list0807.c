/*
	�K������߂�
*/

#include <stdio.h>

/*--- �K��l��Ԃ� ---*/
int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main(void)
{
	int num;

	printf("��������͂��Ă��������F");
	scanf("%d", &num);

	printf("%d�̊K���%d�ł��B\n", num, factorial(num));

	return 0;
}
