/*
	0.0����1.0�܂�0.01�P�ʂŌJ��Ԃ�
*/

#include <stdio.h>

int main(void)
{
	float x;

	for (x = 0.0; x <= 1.0; x += 0.01)
		printf("x = %f\n", x);

	return 0;
}
