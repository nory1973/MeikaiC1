/*
	unsigned�^�̒l�����E�ɃV�t�g�����l��\��
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
	unsigned x, n;

	printf("�񕉂̐����F");          scanf("%u", &x);
	printf("�V�t�g����r�b�g���F");  scanf("%u", &n);

	printf("\n����     = ");   print_bits(x);
	printf("\n���V�t�g = ");   print_bits(x << n);
	printf("\n�E�V�t�g = ");   print_bits(x >> n);
	putchar('\n');

	return 0;
}
