int _sqr(int, int);

int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}

int _sqr(int a, int b)
{
	if (b * b > a)
	{
		return -1;
	}
	else if (b * b == a)
	{
		return b;
	}
	else return (_sqr(a, ++b));
}

