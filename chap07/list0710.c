/*
	0.0����1.0�܂�0.01�P�ʂŌJ��Ԃ��i�����Ő���j
*/

#include  <stdio.h>

int main(void)
{
	int    i;
	float  x;

	for (i = 0; i <= 100; i++) {
		x = i / 100.0;
		printf("x = %f\n", x);
	}

	return (0);
}
