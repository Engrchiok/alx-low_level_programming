/**
 * _strcat - function definition for concatenating two strings.
 * @dest: function parameter.
 * @src: function parameter.
 * Return: always returns the pointer variable, dest.
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
