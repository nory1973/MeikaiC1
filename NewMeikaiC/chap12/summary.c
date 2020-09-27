/*
	���t��\���\���̂Ɛl�Ԃ�\���\����
*/

#include <stdio.h>

#define NAME_LEN	128		/* �����̕����� */

/*=== ���t��\���\���� ===*/
struct Date {
	int y;		/* �N */
	int m;		/* �� */
	int d;		/* �� */
};

/*=== �l�Ԃ�\���\���� ===*/
typedef struct {
	char name[NAME_LEN];	/* ���� */
	struct Date birthday;	/* �a���� */
} Human;

/*--- �|�C���^h���w���l�Ԃ̎����ƒa������\�� ---*/
void print_Human(const Human *h)
{
	printf("%s�i%04d�N%02d��%02d�����܂�j\n",
				h->name, h->birthday.y, h->birthday.m, h->birthday.d);
}

int main(void)
{
	int i;
	struct Date today;		/* �����̓��t */

	Human member[] = {
		{"�Éꐭ�j", {1904, 11, 18}},
		{"�ēc�]�m", {1963, 11, 18}},
		{"���c�y��", {1980, 11, 18}},
	};

	printf("�����̓��t����͂��Ă��������B\n");
	printf("�N�F");   scanf("%d", &today.y);
	printf("���F");   scanf("%d", &today.m);
	printf("���F");   scanf("%d", &today.d);

	printf("������%d�N%d��%d���ł��ˁB\n", today.y, today.m, today.d);

	printf("--- ����ꗗ�\ ---\n");
	for (i = 0; i < sizeof(member) / sizeof(member[0]); i++)
		print_Human(&member[i]);

	return 0;
}
