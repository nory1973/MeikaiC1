/*
	�z��ɂ�镶����̏�������
*/

#include <stdio.h>

int main(void)
{
	char s[] = "ABC";

	printf("s = \"%s\"\n", s);

	s = "DEF";		/* �G���[ */

	printf("s = \"%s\"\n", s);

	return 0;
}
