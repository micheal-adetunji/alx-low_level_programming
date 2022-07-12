#include "main.h"

int _sqrt(int n, int r);

/**
 * _sqrt- returns square root of an
 * integer
 * @n: integer parameter
 * @r: test square root
 *
 * Return: returns an integer
 */
int _sqrt(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	else
		return (_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - returns square root of an
 * integer
 * @n: integer parameter
 *
 * Return: returns an integer
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	return (_sqrt(n, r));
}
