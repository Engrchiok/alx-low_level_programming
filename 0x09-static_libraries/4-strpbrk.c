char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s++ != 0)
	{
		for (n = 0; *(accept + n) != 0; n++)
		{
			if (*(accept + n) == *s)
			{
				return (s);
			}
		}
	}
	return (0);
}
