/*
	�z��Ŏ������镶����ƃ|�C���^�Ŏ������镶����̋��ʓ_
*/

#include  <stdio.h>

int main(void)
{
	int	   i;
	char   str[] = "ABC";
	char  *ptr   = "123";

	for (i = 0; str[i]; i++)
		putchar(str[i]);		/* str[i]�́A�擪����i���̗v�f */
	putchar('\n');

	for (i = 0; ptr[i]; i++)
		putchar(ptr[i]);		/* ptr[i]�́A�擪����i���̗v�f */
	putchar('\n');

	printf("str = \"%s\"\n", str);		/* str�͐擪�����ւ̃|�C���^ */
	printf("ptr = \"%s\"\n", ptr);		/* ptr�͐擪�����ւ̃|�C���^ */

	return (0);
}
