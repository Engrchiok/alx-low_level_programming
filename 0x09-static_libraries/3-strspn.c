unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, n;

	n = 0;
	for (a = 0; a == n; a++)
	{
		for (b = 0; *(accept + b) != 0; b++)
		{
			if (*(accept + b) == *s)
			{
				n++;
				break;
			}
		}
		s++;
	}
	return (n);
}
