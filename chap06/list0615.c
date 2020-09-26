/*
	逐次探索（番兵法）
*/

#include  <stdio.h>

#define	 NUMBER		5
#define	 FAILED		-1

/*--- 番兵法による逐次探索 ---*/
int search(int vc[], int key, int no)
{
	int	 i = 0;

	vc[no] = key;		/* 番兵を追加 */

	while (1) {
		if (vc[i] == key)
			break;
		i++;
	}

	return (i == no ? FAILED : i);
}

int main(void)
{
	int	 i, ky, idx;
	int	 vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]：", i);
		scanf("%d", &vx[i]);
	}
	printf("探す値：");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FAILED)
		puts("\a探索に失敗しました。");
	else
		printf("%dは%d番目にあります。\n", ky, idx + 1);

	return (0);
}
