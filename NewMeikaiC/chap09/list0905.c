/*
	������"12345"�����������ĕ\��
*/

#include <stdio.h>

int main(void)
{
	char str[] = "12345";

	printf("%s\n",   str);		/* ���̂܂� */
	printf("%3s\n",  str);		/* �Œ�R�� */
	printf("%.3s\n", str);		/* �R���܂� */
	printf("%8s\n",  str);		/* �Œ�W���ŉE�悹 */
	printf("%-8s\n", str);		/* �Œ�W���ō��悹 */

	return 0;
}
