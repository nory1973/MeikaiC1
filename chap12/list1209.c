/*
	今日の日付を表示する
*/

#include  <time.h>
#include  <stdio.h>

void put_date(void)
{
	time_t		current;
	struct tm  *local;
	char  wday_name[][3] = { "日", "月", "火", "水", "木", "金", "土" };

	time(&current);						/* 現在の時刻を取得 */
	local = localtime(&current);		/* 地方時の構造体に変換 */
	printf("%4d年%02d月%02d日(%s)", local->tm_year + 1900		/* 年 */
								  ,	local->tm_mon + 1			/* 月 */
								  , local->tm_mday				/* 日 */
								  , wday_name[local->tm_wday] 	/* 曜日 */
		  );
}

int main(void)
{
	printf("今日は");
	put_date();
	printf("です。\n");

	return (0);
}
