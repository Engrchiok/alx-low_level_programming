/**
 * int _abs - function definition for computing the absolute value of an integer.
 * Return: always int a which is the absolute value n.
 */

int _abs(int n)
{
	int a;
	if (n < 0)
	{
		a = n * (-1);
	}
	else a = n;
	return (a);
}
