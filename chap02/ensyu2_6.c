/*
	�g������W���̏d�v�Z�i�����_�ȉ��P���j
*/

#include  <stdio.h>

int main(void)
{
	int		height;
	double	aweight, height2;			/* ���ϒl */

	puts("�g������͂��Ă��������B");
	printf("�g��(cm)�F");	  scanf("%d", &height);

    aweight = (height-100)*0.9;

	printf("�g��%4dcm�̕W���̏d��\n", height);		/* 99999 */
	printf("%4.1fkg�ł�\n", aweight);		/* 999.9 */

	puts("�g������͂��Ă��������B���������_");
	printf("�g��(cm)�F");	  scanf("%lf", &height2);
    printf("�g����%6.2fcm\n", height2);		/* 99999 */

	return (0);
}