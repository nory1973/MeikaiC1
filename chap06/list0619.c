/*
	�����L������ԂƐÓI�L�������
*/

#include  <stdio.h>

int	 fx = 0;				/* �ÓI�L������ԁ{�t�@�C���L���͈� */

void func(void)
{
	static int	sx = 0;		/* �ÓI�L������ԁ{�u���b�N�L���͈� */
	int			ax = 0;		/* �����L������ԁ{�u���b�N�L���͈� */
				
	printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main(void)
{
	int	 i;

	puts(" ax sx fx");
	puts("----------");
	for (i = 0; i < 10; i++)
		func();
	puts("----------");

	return (0);
}
