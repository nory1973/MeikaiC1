/*
	�ǂݍ��񂾐����l���R�Ŋ�������]��\���iswitch���j
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	switch (no % 3) {
	 case 0 : puts("���̐��͂R�Ŋ���؂�܂��B");		break;
	 case 1 : puts("���̐����R�Ŋ�������]�͂P�ł��B");	break;
	 case 2 : puts("���̐����R�Ŋ�������]�͂Q�ł��B");	break;
	}

	return 0;
}
