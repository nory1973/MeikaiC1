/*
	��̐�����Ǎ��A��҂��O�҂̖񐔂��ǂ����𔻒肷��
*/

#include  <stdio.h>

int main(void)
{
	int	 va, vb;

	printf("��������͂��Ă��������F");
    printf("����A�F"); scanf("%d", &va);
    printf("����B�F"); scanf("%d", &vb);

	if (va % vb){
		puts("���(����B)�͑O��(����A)�̖񐔂ł͂���܂���B");
        printf("%d", va%vb);
    }else{
        puts("���(����B)�͑O��(����A)�̖񐔂ł��B");
        printf("%d", va%vb);
	return (0);
    }
}
