#include "main.h"

int _prime_number(int n, int r);

/**
 * _prime_number - finds prime number
 * @n: prime number argument
 * @r: integer to test prime number
 *
 *  Return: returns an int
 */
int _prime_number(int n, int r)
{
	if (n / r == 1 && n % r == 0)
		return (1);
	if (n / r > 1 && n % r == 0)
		return (0);
	return (_prime_number(n, r + 1));
}

/**
 * is_prime_number - returns 1 for prime
 * numbers and 0 otherwise
 * @n: integer to be tested
 *
 * Return: returns an int
 */
int is_prime_number(int n)
{
	int r = 2;

	if (n <= 1)
		return (0);
	return (_prime_number(n, r));
}
