/*
	�x����o�͂���
*/

#include <stdio.h>

/* �x����o�� */
void put_alert(void)
{
	putchar('\a');
}

int main(void)
{
	int i;
	int no;

	printf("�x����o�͂���񐔁F");
	scanf("%d", &no);

	for (i = 0; i < no; i++)
		put_alert();

	return 0;
}
