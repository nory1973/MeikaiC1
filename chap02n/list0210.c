/*
	��̐����l��ǂݍ���ŕ��ϒl�������ŕ\���i�L���X�g�𗘗p�j
*/

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����a�F");   scanf("%d", &a);
	printf("����b�F");   scanf("%d", &b);

	printf("�����̕��ς�%f�ł��B\n", (double)(a + b) / 2);	/* �L���X�g */

	return 0;
}
