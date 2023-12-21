char *_rev(char *);

int _pal(char *, char *);

int is_palindrome(char *s)
{
	return (_pal(_rev(s), s));
}

char *_rev(char *a)
{
	if (*(a + 1) == 0)
	{
		return a;
	}
	return (_rev(a + 1));
}

int _pal(char *b, char *c)
{
	if (*c == 0)
	{
		return 1;
	}
	else if (*b != *c)
	{
		return 0;
	}
	else return (1 * _pal(b - 1, c + 1));
}







