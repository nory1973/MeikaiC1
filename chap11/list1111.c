/*--- ������s2��s1�ɕt�������� ---*/
char *strcat(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1) s1++;						/* s1�𖖔��܂Ői�߂� */
	while (*s1++ = *s2++) ;					/* s2��'\0'��������܂ŃR�s�[ */
	return (tmp);
}

/*--- ������s2��s1�ɍő�n������t�������� ---*/
char *strncat(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (*s1) s1++;						/* s1�𖖔��܂Ői�߂� */
	while (n--)
		if (!(*s1++ = *s2++)) break;		/* �r����'\0'������ΏI�� */
	*s1 = '\0';								/* s1�̍Ō��'\0'������ */
	return (tmp);
}
