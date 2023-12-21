char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a;
	unsigned int b;

	b = 1;
	for (a = dest; b <= n; b++)
	{
		*a++ = *src++;
	}
	return (dest);
}
