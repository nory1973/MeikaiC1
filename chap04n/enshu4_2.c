/*
	��̐����l��ǂݍ����
    ���������̐����ȏ�A
    �傫�����̐����ȉ��̑S�������������l��\��
*/

#include <stdio.h>

int main(void)
{
    int retry;
    do {
        int sum = 0;	/* ���v */
        int cnt = 0;	/* �����l�̌� */
        int na, nb;
        int dai;

        printf("�����l������͂��Ă��������B\n");
        printf("�����lA�F");scanf("%d", &na);
        printf("�����lB�F");scanf("%d", &nb);

        cnt = na >= nb ? na - nb : nb - na;
        printf("cnt�F%d\n", cnt);
        dai = na >= nb ? na : nb; 
        printf("dai�F%d\n", dai);
        
        do {
            sum += dai - cnt;
    //      sum = sum + dai - cnt; 
            printf("sum�F%d\n", sum);
            cnt--;
    //      cnt = cnt - 1;	 
            printf("cnt�F%d\n", cnt);
        } while (cnt >= 0);
    //   } while (cnt != -1);

        printf("���v��%d�ł��B\n", sum);
		printf("�܂��H<Yes�c0/No�c9>�F");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
