/*
	前回のプログラム実行時の日付と時刻を表示する
*/

#include  <time.h>
#include  <stdio.h>

char  data_file[] = "datetime.dat";				/* ファイル名 */

/*--- 前回の日付・時刻を取得・表示 ---*/
void get_data(void)
{
	FILE  *fp;

	if ((fp = fopen(data_file, "r")) == NULL) {				/* オープン */
		printf("本プログラムを実行するのは初めてですね。\n");
	} else {
		int	 year, month, day, h, m, s;

		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		printf("前回は%d年%d月%d日%d時%d分%d秒でした。\n",
										year, month, day, h, m, s);
		fclose(fp);											/* クローズ */
	}
}

/*--- 今回の日付・時刻を書き込む ---*/
void put_data(void)
{
	FILE  *fp;
	time_t	   t;
	struct tm  *local;

	time(&t);
	local = localtime(&t);

	if ((fp = fopen(data_file, "w")) == NULL)				/* オープン */
		printf("\aファイルをオープンできません。\n");
	else {
		fprintf(fp, "%d %d %d %d %d %d\n",
				local->tm_year + 1900, local->tm_mon + 1, local->tm_mday,
				local->tm_hour,		   local->tm_min,	  local->tm_sec);
		fclose(fp);											/* クローズ */
	}
}

int main(void)
{
	get_data();			/* 前回の日付・時刻を取得・表示 */

	put_data();			/* 今回の日付・時刻を書き込む */

	return (0);
}
