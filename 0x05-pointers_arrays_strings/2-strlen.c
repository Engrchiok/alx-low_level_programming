/**
 * _strlen - function definition for computing the length of a string.
 * @s: function argument.
 * Return: Always returns the length of a variable.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != 0; s++)
	{
		len++;
	}
	return (len);
}
