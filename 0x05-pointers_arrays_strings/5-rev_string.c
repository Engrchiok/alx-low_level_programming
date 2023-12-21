void rev_string(char *s)
{
	char *a;
	char b;
	int len;
	int l;
	a = s;
//	b = *s;

	for (len = 0; *a != 0; a++)
	{
		len++;
	}

	l = len / 2;

	while (l > 0)
	{
		--a;
		b = *s;
		*s = *a;
		*a = b;
		s++;
		l--;
	}
//*s++ = 'G';

//	s = b;

//	*++s = 'T';
//s = a;
}
