/*
	��Q�͂̂܂Ƃ�
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	double r;	/* ���a */

	printf("����a��b�̒l�F");
	scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a + b);	/* ���Z�F�Q��+���Z�q */
	printf("a - b = %d\n", a - b);	/* ���Z�F�Q��-���Z�q */
	printf("a * b = %d\n", a * b);	/* �ρ@�F�Q��*���Z�q */
	printf("a / b = %d\n", a / b);	/* ���@�F/���Z�q     */
	printf("a %% b = %d\n", a % b);	/* ��]�F%���Z�q     */

	printf("(a+b)/2 = %d\n",   (a + b) / 2);
	printf("���ϒl  = %f\n\n", (double)(a + b) / 2);

	printf("���a�F");
	scanf("%lf", &r);

	printf("���a%.3f�̉~�̖ʐς�%.3f�ł��B\n", r, 3.14 * r * r);

	return 0;
}
