/*
	��W�͂̂܂Ƃ߁i�񋓁j
*/

#include <stdio.h>

enum RGB {Red, Green, Blue};

int main(void)
{
	int color;

	printf("0�`2�̒l�F");  scanf("%d", &color);

	printf("���Ȃ���");  
	switch (color) {
	 case 0 : printf("��");  break;
	 case 1 : printf("��");  break;
	 case 2 : printf("��");  break;
	}
	printf("��I�т܂����B\n");

	return 0;
}
