/*
	��������̐����������J�E���g����
*/

#include <stdio.h>

/*--- ������s���Ɋ܂܂�鐔�������̏o���񐔂�z��cnt�Ɋi�[ ---*/
void str_dcount(const char s[], int cnt[])
{
	int i = 0;
	while (s[i]) {
		if (s[i] >= '0' && s[i] <= '9')
			cnt[s[i] - '0']++;
		i++;
	}
}

int main(void)
{
	int  i;
	int  dcnt[10] = {0};	/* ���z */
	char str[128];			/* ������ */

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	str_dcount(str, dcnt);

	puts("���������̏o����");
	for (i = 0; i < 10; i++)
		printf("'%d'�F%d\n", i, dcnt[i]);

	return 0;
}
