/*
	�z��ɂ�镶����ƃ|�C���^�ɂ�镶����
*/

#include <stdio.h>

int main(void)
{
	char str[] = "ABC";		/* �z��ɂ�镶���� */
	char *ptr  = "123";		/* �|�C���^�ɂ�镶���� */

	printf("str = \"%s\"\n", str);		/* str�͐擪�����ւ̃|�C���^ */
	printf("ptr = \"%s\"\n", ptr);		/* ptr�͐擪�����ւ̃|�C���^ */

	return 0;
}
