char *_strncpy(char *dest, char *src, int n)
{
	int a;
	char *b;

	b = dest;
	for (a = 1; a <= n; a++)
	{
		if (*src != 0)
		{
		*dest++ = *src++;
		if (*dest != 0)
		{
			continue;
		}
		else break;
		}
		else break;
	}
	return (b);
}
