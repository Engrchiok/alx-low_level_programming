char *_strchr(char *s, char c)
{
	while (*s++ != 0)
	{
		if (*s == c)
		{
			break;
		}
	}
	if (*s == c)
	{
		return (s);
	}
	else return (0);
}
