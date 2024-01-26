/**
 * print_name - function that manipulates a string, using a function pointer.
 * @name: function parameter.
 * @f: function pointer.
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
