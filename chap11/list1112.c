/*--- 文字列s1とs2を比較する ---*/
int strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2) {
		if (*s1 == '\0')
			return (0);								/* 等しい */
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*--- 文字列s1とs2を最初のn文字を比較する ---*/
int strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s2) {
		if (*s1 != *s2)								/* 等しくない */
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (!n)  return (0);							/* 等しい */
	if (*s1) return (1);							/* s1 > s2 */
	return (-1);									/* s1 < s2 */
}
