/*--- 四つの整数の最大値を返す ---*/
int max4(int w, int x, int y, int z)
{
	return (maxof(maxof(w, x), maxof(y, z)));
}
