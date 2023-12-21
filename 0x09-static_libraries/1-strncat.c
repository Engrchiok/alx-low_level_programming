/**
 * _strncat - function definition for concatenating two strings to a n extra bytes from the reference string to the destination string.
 * @dest: function argument for final output of concatenation.
 * @src: function argument for reference string to concatenate.
 * @n: function argument for amount of extra bytes to concactenate.
 * Return: always returns the pointer variable, dest, which is the concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *a;
	int b;

	for (a = dest; *a != 0; a++)
	{
	}
	for (b = 1; b <= n; b++)
	{
		if (*src != 0)
		{
			*a++ = *src++;
		}
		else break;
	}
	*a = 0;
	return (dest);
}
