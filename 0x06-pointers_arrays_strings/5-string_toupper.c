char *string_toupper(char *a)
{
	char *b;

	for (b = a; *b != 0; b++)
	{
		if (*b >= 'a' && *b <= 'z')
		{
		*b = *b - ('a' - 'A');
		}
	}
	return (a);
}
