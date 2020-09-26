/*
	•¶š—ñ“à‚Ì‰pš‚ğ‘å•¶š^¬•¶š‚É•ÏŠ·
*/

#include  <ctype.h>
#include  <stdio.h>

/*--- •¶š—ñ“à‚Ì‰pš‚ğ‘å•¶š‚É•ÏŠ· ---*/
void str_toupper(char str[])
{
	unsigned  i = 0;
	while (str[i]) {
		str[i] = toupper(str[i]);
		i++;
	}
}

/*--- •¶š—ñ“à‚Ì‰pš‚ğ¬•¶š‚É•ÏŠ· ---*/
void str_tolower(char str[])
{
	unsigned  i = 0;
		while (str[i]) {
		str[i] = tolower(str[i]);
		i++;
	}
}

int main(void)
{
	char  str[100];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", str);

	str_toupper(str);
	printf("‘å•¶šF%s\n", str);

	str_tolower(str);
	printf("¬•¶šF%s\n", str);

	return (0);
}
