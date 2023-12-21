/**
 * _strcat - function definition for concatenating two strings.
 * @dest: function argument for final output of concatenation.
 * @src: function argument for reference string to concatenate.
 * Return: always returns the pointer variable, dest, which is the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	char *a;

	for (a = dest; *a != 0; a++)
	{
	}
	while (*src != 0)
	{
		*a++ = *src++;
	}
	*a = 0;
	return (dest);
}
