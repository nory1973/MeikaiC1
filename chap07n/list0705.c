/*
	�z��̗v�f�������߂�
*/

#include <stdio.h>

int main(void)
{
	int    vi[10];
	double vd[25];

	printf("�z��vi�̗v�f����%u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
	printf("�z��vd�̗v�f����%u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));

	return 0;
}
