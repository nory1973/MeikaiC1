/*
	�r�b�g�P�ʂ̘_�����Z
*/

#include <stdio.h>

/*--- ����x���̃Z�b�g���ꂽ�r�b�g����Ԃ� ---*/
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

/*--- unsigned�^�̃r�b�g����Ԃ� ---*/
int int_bits(void)
{
	return count_bits(~0U);
}

/*--- unsigned�^�̃r�b�g���e��\�� ---*/
void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	unsigned a, b;

	printf("�񕉂̐��������͂��Ă��������B\n");
	printf("a : ");   scanf("%u", &a);
	printf("b : ");   scanf("%u", &b);

	printf("\na     = ");   print_bits(a);
	printf("\nb     = ");   print_bits(b);
	printf("\na & b = ");   print_bits(a & b);		/* a��b�̘_���� */
	printf("\na | b = ");   print_bits(a | b);		/* a��b�̘_���a */
	printf("\na ^ b = ");   print_bits(a ^ b);		/* a��b�̔r���I�_���a */
	printf("\n~a    = ");   print_bits(~a);			/* a�̂P�̕␔ */
	printf("\n~b    = ");   print_bits(~b);			/* b�̂P�̕␔ */
	putchar('\n');

	return 0;
}
