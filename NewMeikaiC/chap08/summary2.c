/*
	��W�͂̂܂Ƃ߁i�֐��`���}�N���E�R���}���Z�q�E�����̓��o�͂Ȃǁj
*/

#include <stdio.h>

/* �x��𔭂��� */
#define alert() (putchar('\a'))

/* ����c��\�����ĉ��s */
#define putchar_ln(c) (putchar(c), putchar('\n'))

int main(void)
{
	int ch;
	int sum = 0;	/* ���ׂĂ̐����̍��v */

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			sum += ch - '0';

		if (ch == '\n') {
			alert();
			putchar('\n');
		} else {
			putchar_ln(ch);
		}
	}

	printf("���������̍��v��%d�ł��B\n", sum);

	return 0;
}
