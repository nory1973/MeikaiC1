/*
	unsigned�^�̘_���ρE�_���a�E�r���I�_���a�E�P�̕␔��\��
*/

#include  <stdio.h>

/*--- ����x���̃Z�b�g���ꂽ�r�b�g����Ԃ� ---*/
int count_bits(unsigned x)
{
	int	 count = 0;
	while (x) {
		if (x & 1U) count++;
		x >>= 1;
	}
	return (count);
}

/*--- unsigned�^�̃r�b�g����Ԃ� ---*/
int int_bits(void)
{
	return (count_bits(~0U));
}

/*--- unsigned�^�̃r�b�g���e��\�� ---*/
void print_bits(unsigned x)
{
	int	 i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	unsigned  na, nb;

	puts("��̔񕉂̐�������͂��Ă��������B");
	printf("�����`�F");	  scanf("%u", &na);
	printf("�����a�F");	  scanf("%u", &nb);

	printf("\n�`   �@ �� ");   print_bits(na);
	printf("\n�a   �@ �� ");   print_bits(nb);
	printf("\n�` & �a �� ");   print_bits(na & nb);		/* �_���� */
	printf("\n�` | �a �� ");   print_bits(na | nb);		/* �_���a */
	printf("\n�` ^ �a �� ");   print_bits(na ^ nb);		/* �r���I�_���a */
	printf("\n~�`�@   �� ");   print_bits(~na);			/* �P�̕␔ */
	printf("\n~�a�@   �� ");   print_bits(~nb);			/* �P�̕␔ */
	putchar('\n');

	return (0);
}