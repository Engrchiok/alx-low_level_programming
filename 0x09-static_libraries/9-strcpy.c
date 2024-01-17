char *_strcpy(char *dest, char *src)
{
	char *a;
	char *b;

	a = src;
	b = dest;
	while (*a != 0)
	{
		*b++ = *a++;
	}
	*b = 0;
	return (dest);
}

