/*
��̐�����Ǎ��A
�������Z�q��֌W���Z�q��
�u�P�v���邢�́u�O�v�̒l�𐶐����邱�Ƃ�
�m�F����v���O����
*/

#include  <stdio.h>

int main(void)
{
	int	 na, nb;

	printf("��̐�������͂��Ă�������\n");
	printf("����A�F");
    scanf("%d", &na);
    printf("����B�F");
    scanf("%d", &nb);

	if (na == nb) {
		puts("A��B�͓������ł��B");
        printf(" na == nb %d\n", na == nb);
        printf(" na != nb %d\n", na != nb);
        printf(" na > nb %d\n", na > nb);
        printf(" na < nb %d\n", na < nb);
        printf(" na >= nb %d\n", na >= nb);
        printf(" na <= nb %d\n", na <= nb);
	} else if (na > nb) {
		puts("A��B���傫���ł��B");
        printf(" na == nb %d\n", na == nb);
        printf(" na != nb %d\n", na != nb);
        printf(" na > nb %d\n", na > nb);
        printf(" na < nb %d\n", na < nb);
        printf(" na >= nb %d\n", na >= nb);
        printf(" na <= nb %d\n", na <= nb);
    } else {
//    else if (no < 0)
        printf(" na == nb %d\n", na == nb);
        printf(" na != nb %d\n", na != nb);
        printf(" na > nb %d\n", na > nb);
        printf(" na < nb %d\n", na < nb);
        printf(" na >= nb %d\n", na >= nb);
        printf(" na <= nb %d\n", na <= nb);
    }
    printf(" na / nb %d\n", na / nb);
    printf(" na %% nb %d\n", (na % nb));

	return (0);
}