char *_memset(char *s, char b, unsigned int n)
{
	char *a;
	unsigned c;

	a = s;
	for (c = 1; c <= n; c++)
	{
		*a++ = b;
	}
	return (s);
}
