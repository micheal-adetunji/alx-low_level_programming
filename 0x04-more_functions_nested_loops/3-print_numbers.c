#include "main.h"

/**
 * print_numbers - outputs 0 - 9 digits
 *
 * Return: returns void
 */
void print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
