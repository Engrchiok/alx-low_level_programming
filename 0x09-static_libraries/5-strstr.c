char *_strstr(char *haystack, char *needle)
{
	int a, b;

	while (*haystack++ != 0)
	{
		if (*needle == *haystack)
		{
			for (b = 0, a = 0; *(needle + b) != 0 && *(haystack + a) != 0; b++, a++)
			{
				if (*(needle + b) != *(haystack + a))
				{
					break;
				}
			}
			if (*(needle + b) == 0)
			{
				return (haystack);
				break;
			}
			else if (*(haystack + a) == 0)
			{
				return (0);

			}
		}
	}
	return (0);
}
