/*
	���������_�������x�����Z
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	float value;		/* �l */
	float sum = 0.0f;	/* ���v */

	puts("���������_�������x�����Z���܂��B");
	printf("�l�F");     scanf("%f", &value);
	printf("�񐔁F");   scanf("%d", &no);

	for (i = 0; i < no; i++)
		sum += value;
	printf("���Z���ʂ�%f�ł��B\n", sum);

	return 0;
}
