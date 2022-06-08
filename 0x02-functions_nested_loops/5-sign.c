#include "main.h"

/**
 * print_sign - outputs sign of integers
 * @n: integer argument
 *
 * outputs sign of integers
 * Return: returns 1, if int is +ve,-1 if int is -ve
 * and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
