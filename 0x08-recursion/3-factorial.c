#include "main.h"

/**
 * factorial - returns factorial of an integer
 * @n: integer parameter
 *
 * Return: returns an int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
