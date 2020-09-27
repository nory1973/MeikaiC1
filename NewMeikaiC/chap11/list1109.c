/*--- strcpy�̎����� ---*/
char *strcpy(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1++ = *s2++)
		;

	return tmp;
}

/*--- strncpy�̎����� ---*/
char *strncpy(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (n) {
		if (!(*s1++ = *s2++)) break;	/* '\0'����������I�� */
		n--;
	}
	while (n--)
		*s1++ = '\0';					/* �c���'\0'�Ŗ��߂� */

	return tmp;
}
