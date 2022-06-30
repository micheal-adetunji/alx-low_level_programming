#include "main.h"

/**
 * print_number - print out integers
 * @n: integer to be printed
 *
 * Return: returns nothing
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	num = n / 10;
	if (num > 0)
		print_number(num);
	_putchar((n % 10) + '0');
}

