/*
	������̑���i�H�j
*/

#include  <stdio.h>

int main(void)
{
	char   str[] = "ABC";
	char  *ptr   = "123";

	str = "DEF";		/* �G���[�F�������q�������邱�Ƃ͂ł��Ȃ� */
	ptr = "456";		/* �������F���̕����񃊃e�������w�� */

	printf("str = \"%s\"\n", str);
	printf("ptr = \"%s\"\n", ptr);

	return (0);
}
