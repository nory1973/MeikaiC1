/*
	プログラムを実行した日付・時刻をファイルに書き出す
*/

#include  <time.h>
#include  <stdio.h>

int main(void)
{
	FILE  *fp;
	time_t	   t;
	struct tm  *local;

	time(&t);
	local = localtime(&t);

	if ((fp = fopen("dt_dat", "w")) == NULL)				/* オープン */
		printf("\aファイルをオープンできません。\n");
	else {
		printf("現在の日付・時刻を書き出しました。\n");
		fprintf(fp, "%d %d %d %d %d %d\n",
			local->tm_year + 1900, local->tm_mon + 1, local->tm_mday,
			local->tm_hour,		   local->tm_min,	  local->tm_sec  );
		fclose(fp);											/* クローズ */
	}

	return (0);
}
